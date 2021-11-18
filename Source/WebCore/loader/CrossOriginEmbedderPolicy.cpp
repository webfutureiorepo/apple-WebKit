/*
 * Copyright (C) 2021 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "CrossOriginEmbedderPolicy.h"

#include "HTTPHeaderNames.h"
#include "HTTPParsers.h"
#include "ScriptExecutionContext.h"

namespace WebCore {

// https://html.spec.whatwg.org/multipage/origin.html#obtain-an-embedder-policy
CrossOriginEmbedderPolicy obtainCrossOriginEmbedderPolicy(const ResourceResponse& response, const ScriptExecutionContext& context)
{
    auto parseCOEPHeader = [&response](HTTPHeaderName headerName, auto& value, auto& reportingEndpoint) {
        auto coepParsingResult = parseStructuredFieldValue(response.httpHeaderField(headerName));
        if (coepParsingResult && coepParsingResult->first == "require-corp") {
            value = CrossOriginEmbedderPolicyValue::RequireCORP;
            reportingEndpoint = coepParsingResult->second.get("report-to"_s);
        }
    };

    CrossOriginEmbedderPolicy policy;
    // FIXME: about:blank should be marked as secure as per https://w3c.github.io/webappsec-secure-contexts/#potentially-trustworthy-url.
    if (!context.isSecureContext() && context.url() != aboutBlankURL())
        return policy;

    parseCOEPHeader(HTTPHeaderName::CrossOriginEmbedderPolicy, policy.value, policy.reportingEndpoint);
    parseCOEPHeader(HTTPHeaderName::CrossOriginEmbedderPolicyReportOnly, policy.reportOnlyValue, policy.reportOnlyReportingEndpoint);
    return policy;
}

} // namespace WebCore