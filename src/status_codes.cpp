#include "axe/status_codes.hpp"

namespace axe {

std::string statusToReasonPhrase(StatusCode c) {
  {
    switch (c) {
    case StatusCode::Continue:
      return "Continue";
    case StatusCode::switchingProtocols:
      return "Switching Protocols";
    case StatusCode::processing:
      return "Processing";
    case StatusCode::earlyHints:
      return "Early Hints";
    case StatusCode::ok:
      return "OK";
    case StatusCode::created:
      return "Created";
    case StatusCode::accepted:
      return "Accepted";
    case StatusCode::nonAuthoritativeInformation:
      return "Non-Authoritative Information";
    case StatusCode::noContent:
      return "No Content";
    case StatusCode::resetContent:
      return "Reset Content";
    case StatusCode::partialContent:
      return "Partial Content";
    case StatusCode::multiStatus:
      return "Multi-Status";
    case StatusCode::alreadyReported:
      return "Already Reported";
    case StatusCode::IMUsed:
      return "IM Used";
    case StatusCode::multipleChoices:
      return "Multiple Choices";
    case StatusCode::movedPermanently:
      return "Moved Permanently";
    case StatusCode::found:
      return "Found";
    case StatusCode::seeOther:
      return "See Other";
    case StatusCode::notModified:
      return "Not Modified";
    case StatusCode::useProxy:
      return "Use Proxy";
    case StatusCode::switchProxy:
      return "unused";
    case StatusCode::temporaryRedirect:
      return "Temporary Redirect";
    case StatusCode::permanentRedirect:
      return "Permanent Redirect";
    case StatusCode::badRequest:
      return "Bad Request";
    case StatusCode::unauthorized:
      return "Unauthorized";
    case StatusCode::paymentRequired:
      return "Payment Required";
    case StatusCode::forbidden:
      return "Forbidden";
    case StatusCode::notFound:
      return "Not Found";
    case StatusCode::methodNotAllowed:
      return "Method Not Allowed";
    case StatusCode::notAcceptable:
      return "Not Acceptable";
    case StatusCode::proxyAuthenticationRequired:
      return "Proxy Authentication Required";
    case StatusCode::requestTimeout:
      return "Request Timeout";
    case StatusCode::conflict:
      return "Conflict";
    case StatusCode::gone:
      return "Gone";
    case StatusCode::lengthRequired:
      return "Length Required";
    case StatusCode::preconditionFailed:
      return "Precondition Failed";
    case StatusCode::payloadTooLarge:
      return "Payload Too Large";
    case StatusCode::URITooLarge:
      return "URI Too Long";
    case StatusCode::unsupportedMediaType:
      return "Unsupported Media Type";
    case StatusCode::rangeNotSatisfiable:
      return "Range Not Satisfiable";
    case StatusCode::expectationFailed:
      return "Expectation Failed";
    case StatusCode::imATeapot:
      return "I'm a teapot";
    case StatusCode::misdirectedRequest:
      return "Misdirected Request";
    case StatusCode::unprocessableEntity:
      return "Unprocessable Entity";
    case StatusCode::locked:
      return "Locked";
    case StatusCode::failedDependency:
      return "Failed Dependency";
    case StatusCode::tooEarly:
      return "Too Early";
    case StatusCode::upgradeRequired:
      return "Upgrade Required";
    case StatusCode::preconditionRequired:
      return "Precondition Required";
    case StatusCode::tooManyRequests:
      return "Too Many Requests";
    case StatusCode::requestHeaderFieldsTooLarge:
      return "Request Header Fields Too Large";
    case StatusCode::unavailableForLegalReasons:
      return "Unavailable For Legal Reasons";
    case StatusCode::internalServerError:
      return "Internal Server Error";
    case StatusCode::notImplemented:
      return "Not Implemented";
    case StatusCode::badGateway:
      return "Bad Gateway";
    case StatusCode::serviceUnavailable:
      return "Service Unavailable";
    case StatusCode::gatewayTimeout:
      return "Gateway Timeout";
    case StatusCode::httpVersionNotSupported:
      return "HTTP Version Not Supported";
    case StatusCode::variantAlsoNegotiates:
      return "Variant Also Negotiates";
    case StatusCode::insufficientStorage:
      return "Insufficient Storage";
    case StatusCode::loopDetected:
      return "Loop Detected";
    case StatusCode::notExtended:
      return "Not Extended";
    case StatusCode::networkAuthenticationRequired:
      return "Network Authentication Required";
    case StatusCode::_pageExpired:
      return "Page Expired";
    case StatusCode::_methodFailure:
      return "Method Failure";
    case StatusCode::_loginTimeout:
      return "Login Time-out";
    case StatusCode::_retryWith:
      return "Retry With";
    case StatusCode::_blockedByWindowsParentalControls:
      return "Blocked by Windows Parental Controls";
    case StatusCode::_redirect:
      return "Redirect";
    case StatusCode::_invalidToken:
      return "Invalid Token";
    case StatusCode::_tokenRequired:
      return "Token Required";
    case StatusCode::_siteIsOverloaded:
      return "Site is overloaded";
    case StatusCode::_siteIsFrozen:
      return "Site is Frozen";
    case StatusCode::_networkReadTimeoutError:
      return "Network read timeout error";
    case StatusCode::_networkConnectTimeoutError:
      return "Network Connect Timeout Error";
    case StatusCode::_noResponse:
      return "No Response";
    case StatusCode::_headerTooLarge:
      return "Request header too large";
    case StatusCode::_SSLCertificateError:
      return "SSL Certificate Error";
    case StatusCode::_SSLCertificateRequired:
      return "SSL Certificate Required";
    case StatusCode::_HTTPRequestSentToHTTPSPort:
      return "HTTP Request Sent to HTTPS Port";
    case StatusCode::_webServerReturnedAnUnknownError:
      return "Web Server Returned an Unknown Error";
    case StatusCode::_webServerIsDown:
      return "Web Server Is Down";
    case StatusCode::_connectionTimedOut:
      return "Connection Timed Out";
    case StatusCode::_originIsUnreachable:
      return "Origin Is Unreachable";
    case StatusCode::_aTimeoutOccurred:
      return "A Timeout Occurred";
    case StatusCode::_SSLHandshakeFailed:
      return "SSL Handshake Failed";
    case StatusCode::_invalidSSLCertificate:
      return "Invalid SSL Certificate";
    case StatusCode::_railgunError:
      return "Railgun Error";
    case StatusCode::_cloudflare530:
      return "Cloudflare 530 Error";
    case StatusCode::_closedConnectionBeforeTimeout:
      return "Client Closed Connection Before Timeout";
    case StatusCode::_manyIPAddressesInXForwardedForHeader:
      return "Many IP Addresses In X-Forwarded-For Header";
    case StatusCode::_unauthorizedByIdentityProvider:
      return "Unauthorized";
    case StatusCode::_bandwidthLimitExceeded:
      return "Bandwidth Limit Exceeded";
    }
  }
}

} // namespace axe