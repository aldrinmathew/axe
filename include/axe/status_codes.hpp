#ifndef AXE_STATUS_CODES_HPP
#define AXE_STATUS_CODES_HPP

#include <string>

namespace axe {

enum class StatusCode {
  /**
   * @brief Informational Codes
   *
   * An informational response indicates that the request was received and
   * understood. It is issued on a provisional basis while request processing
   * continues. It alerts the client to wait for a final response. The message
   * consists only of the status line and optional header fields, and is
   * terminated by an empty line. As the HTTP/1.0 standard did not define any
   * 1xx status codes, servers must not send a 1xx response to an HTTP/1.0
   * compliant client except under experimental conditions.
   *
   */

  // The server has received the request headers and the client should proceed
  // to send the request body (in the case of a request for which a body needs
  // to be sent; for example a POST request).
  Continue = 100,
  // The requester has asked the server to switch protocols and the server has
  // agreed to do so.
  switchingProtocols,
  // A WebDAV request may contain many sub-requests involving file operations,
  // requiring long time to complete the request. This code indicates that the
  // server has received and is processing the request, but no response is
  // available yet. This prevents the client from timing out and assuming the
  // request was lost.
  processing,
  // Used to return some response headers before final HTTP message.
  earlyHints,

  /**
   * @brief Success Codes
   *
   * This class of status codes indicates the action requested by the client was
   * received, understood and accepted.
   *
   */

  // Standard response for successful HTTP requests. The actual response will
  // depend on the request method used. In a GET request, the response will
  // contain an entity corresponding to the requested resource. In a POST
  // request, the response will contain an entity describing or containing the
  // result of the action.
  ok = 200,
  // The request has been fulfilled, resulting in the creation of a new
  // resource.
  created,
  // The request has been accepted for processing, but the processing has not
  // been completed. The request might or might not be eventually acted upon,
  // and may be disallowed when processing occurs.
  accepted,
  // The server is transforming a proxy that received a 200 OK from its origin,
  // but is returning a modified version of the origin's response.
  nonAuthoritativeInformation,
  // The server successfully processed the request, and is not returning any
  // content.
  noContent,
  // The server successfully processed the request, asks that the requester
  // reset its document view, and is not returning any content.
  resetContent,
  // The server is delivering only part of the resource (byte serving) due to a
  // range header sent by the client. The range header is used by HTTP clients
  // to enable resuming of interrupted downloads, or split a download into
  // multiple simultaneous streams.
  partialContent,
  // The message body that follows is by default an XML message and can contain
  // a number of separate response codes, depending on how many sub-requests
  // were made.
  multiStatus,
  // The members of a DAV binding have already been enumerated in a preceding
  // part of the (multistatus) response, and are not being included again.
  alreadyReported,
  // The server has fulfilled a request for the resource, and the response is a
  // representation of the result of one or more instance-manipulations applied
  // to the current instance.
  IMUsed = 226,

  /**
   * @brief Redirection
   *
   * This class of status code indicates the client must take additional action
   * to complete the request. Many of these status codes are used in URL
   * redirection.
   * A user agent may carry out the additional action with no user interaction
   * only if the method used in the second request is GET or HEAD. A user agent
   * may automatically redirect a request. A user agent should detect and
   * intervene to prevent cyclical redirects.
   *
   */

  // Indicates multiple options for the resource from which the client may
  // choose (via agent-driven content negotiation).
  multipleChoices = 300,
  // This and all future requests should be directed to the given URI
  movedPermanently,
  // Tells the client to look at (browse to) another URL. The HTTP/1.0
  // specification (RFC 1945) required the client to perform a temporary
  // redirect with the same method (the original describing phrase was "Moved
  // Temporarily"), but popular browsers implemented 302 redirects by changing
  // the method to GET. Therefore, HTTP/1.1 added status codes 303 and 307 to
  // distinguish between the two behaviours.
  found,
  // The response to the request can be found under another URI using the GET
  // method. When received in response to a POST (or PUT/DELETE), the client
  // should presume that the serve has received the data and should issue a new
  // GET request to the given URI.
  seeOther,
  // Indicates that the resource has not been modified since the version
  // specified by the request headers If-Modified-Since or If-None-Match. In
  // such case, there is no need to retransmit the resource since the client
  // still has a previously-downloaded copy.
  notModified,
  // The requested resource is available only through a proxy, the address for
  // which is provided in the response. For security reasons, many HTTP clients
  // (such as Mozilla Firefox and Internet Explorer) do not obey this status
  // code.
  useProxy,
  // No longer used. Originally meant "Subsequent requests should use the
  // specified proxy."
  switchProxy,
  // In this case, the request should be repeated with another URI; however,
  // future requests should still use the original URI. In contrast to how 302
  // was historically implemented, the request method is not allowed to be
  // changed when reissuing the original request.
  temporaryRedirect,
  // This and all future requests should be directed to the given URI. 308
  // parallel the behaviour of 301, but does not allow the HTTP method to
  // change. So, for example, submitting a form to a permanently redirected
  // resource may continue smoothly.
  permanentRedirect,

  /**
   * @brief Client errors
   *
   * This class of status code is intended for situations in which this error
   * seems to have been caused by the client. Except when responding to a HEAD
   * request, the server should include an entity containing an explanation of
   * the error situation, and whether it is a temporary or permanent condition.
   * These status codes are applicable to any request method. User agents should
   * display any included entity to the user.
   *
   */

  // The server cannot or will not process the request due to an apparent client
  // error (e.g., malformed request syntax, size too large, invalid request
  // message framing, or deceptive request routing).
  badRequest = 400,
  // Similar to 403 Forbidden, but specifically for use when authentication is
  // required and has failed or has not yet been provided. The response must
  // include a WWW-Authenticate header field containing a challenge applicable
  // to the requested resource. 401 semantically means "unauthorised", the user
  // does not have valid authentication credentials for the target resource.
  unauthorized,
  // Reserved for future use. The original intention was that this code might be
  // used as part of some form of digital-cash or micropayment scheme, as
  // proposed, for example, by GNU Taler, but that has not yet happened, and
  // this code is not widely used. Google Developers API uses this status if a
  // particular developer has exceeded the daily limit on requests. Sipgate uses
  // this code if an account does not have sufficient funds to start a call.
  // Shopify uses this code when the store has not paid their fees and is
  // temporarily disabled. Stripe uses this code for failed payments where
  // parameters were correct, for example blocked fraudulent payments.
  paymentRequired,
  // The request contained valid data and was understood by the server, but the
  // server is refusing action. This may be due to the user not having the
  // necessary permissions for a resource or needing an account of some sort, or
  // attempting a prohibited action (e.g. creating a duplicate record where only
  // one is allowed). This code is also typically used if the request provided
  // authentication by answering the WWW-Authenticate header field challenge,
  // but the server did not accept that authentication. The request should not
  // be repeated.
  forbidden,
  // The requested resource could not be found but may be available in the
  // future. Subsequent requests by the client are permissible.
  notFound,
  // A request method is not supported for the requested resource; for example,
  // a GET request on a form that requires data to be presented via POST, or a
  // PUT request on a read-only resource.
  methodNotAllowed,
  // The requested resource is capable of generating only content not acceptable
  // according to the Accept headers sent in the request.
  notAcceptable,
  // The client must first authenticate itself with the proxy.
  proxyAuthenticationRequired,
  // The server timed out waiting for the request. According to HTTP
  // specifications: "The client did not produce a request within the time that
  // the server was prepared to wait. The client MAY repeat the request without
  // modifications at any later time."
  requestTimeout,
  // Indicates that the request could not be processed because of conflict in
  // the current state of the resource, such as an edit conflict between
  // multiple simultaneous updates.
  conflict,
  // Indicates that the resource requested is no longer available and will not
  // be available again. This should be used when a resource has been
  // intentionally removed and the resource should be purged. Upon receiving a
  // 410 status code, the client should not request the resource in the future.
  // Clients such as search engines should remove the resource from their
  // indices. Most use cases do not require clients and search engines to purge
  // the resource, and a "404 Not Found" may be used instead.
  gone,
  // The request did not specify the length of its content, which is required by
  // the requested resource.
  lengthRequired,
  // The server does not meet one of the preconditions that the requester put on
  // the request header fields.
  preconditionFailed,
  // The request is larger than the server is willing or able to process.
  // Previously called "Request Entity Too Large".
  payloadTooLarge,
  // The URI provided was too long for the server to process. Often the result
  // of too much data being encoded as a query-string of a GET request, in which
  // case it should be converted to a POST request. Called "Request-URI Too
  // Long" previously.
  URITooLarge,
  // The request entity has a media type which the server or resource does not
  // support. For example, the client uploads an image as image/svg+xml, but the
  // server requires that images use a different format.
  unsupportedMediaType,
  // The client has asked for a portion of the file (byte serving), but the
  // server cannot supply that portion. For example, if the client asked for a
  // part of the file that lies beyond the end of the file. Called "Requested
  // Range Not Satisfiable" previously.
  rangeNotSatisfiable,
  // The server cannot meet the requirements of the Expect request-header field.
  expectationFailed,
  // This code was defined in 1998 as one of the traditional IETF April Fools'
  // jokes, in RFC 2324, Hyper Text Coffee Pot Control Protocol, and is not
  // expected to be implemented by actual HTTP servers. The RFC specifies this
  // code should be returned by teapots requested to brew coffee. This HTTP
  // status is used as an Easter egg in some websites, such as Google.com's I'm
  // a teapot easter egg.
  imATeapot,
  /// The request was directed at a server that is not able to produce a
  /// response (for example because of connection reuse)
  misdirectedRequest = 421,
  // The request was well-formed but was unable to be followed due to semantic
  // errors.
  unprocessableEntity,
  // The resource that is being accessed is locked.
  locked,
  // The request failed because it depended on another request and that request
  // failed (e.g., a PROPPATCH).
  failedDependency,
  // Indicates that the server is unwilling to risk processing a request that
  // might be replayed.
  tooEarly,
  // The client should switch to a different protocol such as TLS/1.3, given in
  // the Upgrade header field.
  upgradeRequired,
  // The origin server requires the request to be conditional. Intended to
  // prevent the 'lost update' problem, where a client GETs a resource's state,
  // modifies it, and PUTs it back to the server, when meanwhile a third party
  // has modified the state on the server, leading to a conflict.
  preconditionRequired = 428,
  // The user has sent too many requests in a given amount of time. Intended for
  // use with rate-limiting schemes.
  tooManyRequests,
  // The server is unwilling to process the request because either an individual
  // header field, or all the header fields collectively, are too large.
  requestHeaderFieldsTooLarge,
  // A server operator has received a legal demand to deny access to a resource
  // or to a set of resources that includes the requested resource. The code 451
  // was chosen as a reference to the novel Fahrenheit 451
  unavailableForLegalReasons,

  /**
   * @brief Server Errors
   *
   * The server failed to fulfil a request.
   * Response status codes beginning with the digit "5" indicate cases in which
   * the server is aware that it has encountered an error or is otherwise
   * incapable of performing the request. Except when responding to a HEAD
   * request, the server should include an entity containing an explanation of
   * the error situation, and indicate whether it is a temporary or permanent
   * condition. Likewise, user agents should display any included entity to the
   * user. These response codes are applicable to any request method.
   *
   */

  // A generic error message, given when an unexpected condition was encountered
  // and no more specific message is suitable.
  internalServerError = 500,
  // The server either does not recognize the request method, or it lacks the
  // ability to fulfil the request. Usually this implies future availability
  // (e.g., a new feature of a web-service API).
  notImplemented,
  // The server was acting as a gateway or proxy and received an invalid
  // response from the upstream server.
  badGateway,
  // The server cannot handle the request (because it is overloaded or down for
  // maintenance). Generally, this is a temporary state.
  serviceUnavailable,
  // The server was acting as a gateway or proxy and did not receive a timely
  // response from the upstream server.
  gatewayTimeout,
  // The server does not support the HTTP protocol version used in the request.
  httpVersionNotSupported,
  // Transparent content negotiation for the request results in a circular
  // reference.
  variantAlsoNegotiates,
  // The server is unable to store the representation needed to complete the
  // request.
  insufficientStorage,
  // The server detected an infinite loop while processing the request (sent
  // instead of 208 Already Reported).
  loopDetected,
  // Further extensions to the request are required for the server to fulfil it.
  notExtended = 510,
  // The client needs to authenticate to gain network access. Intended for use
  // by intercepting proxies used to control access to the network (e.g.,
  // "captive portals" used to require agreement to Terms of Service before
  // granting full Internet access via a Wi-Fi hotspot).
  networkAuthenticationRequired,

  /**
   * @brief Unofficial Codes
   *
   * The following codes are not specified by any standard.
   *
   */

  // UNOFFICIAL :: Used by the Laravel Framework when a CSRF Token is missing or
  // expired.
  _pageExpired = 419,
  // UNOFFICIAL :: A deprecated response used by the Spring framework when a
  // method has failed.
  _methodFailure,
  // UNOFFICIAL :: Used by Shopify, instead of the 429 Too Many Requests
  // response code, when too many URLs are requested within a certain time
  // frame.
  _headerFieldsTooLarge = 430,
  // UNOFFICIAL :: The client's session has expired and must log in again
  _loginTimeout = 440,
  // UNOFFICIAL :: The server cannot honour the request because the user has not
  // provided the required information
  _retryWith = 449,
  // UNOFFICIAL :: The Microsoft extension code indicated when Windows Parental
  // Controls are turned on and are blocking access to the requested webpage.
  _blockedByWindowsParentalControls = 450,
  // UNOFFICIAL :: Used in Exchange ActiveSync when either a more efficient
  // server is available or the server cannot access the user's mailbox. The
  // client is expected to re-run the HTTP AutoDiscover operation to find a more
  // appropriate server.
  _redirect = 451,
  // UNOFFICIAL :: Returned by "ArcGIS for Server". This code indicates an
  // expired or otherwise invalid token.
  _invalidToken = 498,
  // UNOFFICIAL :: Returned by "ArcGIS for Server". This code indicates that a
  // token is required but was not submitted.
  _tokenRequired,
  // UNOFFICIAL :: The server has exceeded the bandwidth specified by the server
  // administrator. This is often used by shared hosting providers to limit the
  // bandwidth of customers.
  _bandwidthLimitExceeded = 509,
  // UNOFFICIAL :: Used by Qualys in the SSLLabs server testing API to signal
  // that the site can't process the request.
  _siteIsOverloaded = 529,
  // UNOFFICIAL :: used by the Pantheon web platform to indicate a site that has
  // been frozen due to inactivity.
  _siteIsFrozen,
  // UNOFFICIAL :: Used by some HTTP proxies to signal a network read timeout
  // behind the proxy to a client in front of the proxy.
  _networkReadTimeoutError = 598,
  // UNOFFICIAL :: An error used by some HTTP proxies to signal a network
  // connect timeout behind the proxy to a client in front of the proxy.
  _networkConnectTimeoutError,

  /**
   * @brief NGINX
   *
   */

  // UNOFFICIAL :: NGINX :: Used internally to instruct the server to return no
  // information to the client and close the connection immediately.
  _noResponse = 444,
  // UNOFFICIAL :: NGINX :: Client sent too large request or too long header
  // line.
  _headerTooLarge = 494,
  // UNOFFICIAL :: NGINX :: An expansion of the 400 Bad Request response code,
  // used when the client has provided an invalid client certificate.
  _SSLCertificateError,
  // UNOFFICIAL :: NGINX :: An expansion of the 400 Bad Request response code,
  // used when the client certificate is required but not provided.
  _SSLCertificateRequired,
  // UNOFFICIAL :: NGINX :: An expansion of the 400 Bad Request response code,
  // used when the client has made a HTTP request to a port listening for HTTPS
  // requests.
  _HTTPRequestSentToHTTPSPort,
  // UNOFFICIAL :: NGINX :: Used when the client has closed the request before
  // the server could send a response.
  _clientClosedRequest = 499,

  /**
   * @brief Cloudflare
   *
   */

  // UNOFFICIAL :: Cloudflare :: The origin server returned an empty, unknown,
  // or unexpected response to Cloudflare.
  _webServerReturnedAnUnknownError = 520,
  // UNOFFICIAL :: Cloudflare :: The origin server refused connections from
  // Cloudflare. Security solutions at the origin may be blocking legitimate
  // connections from certain Cloudflare IP addresses.
  _webServerIsDown,
  // UNOFFICIAL :: Cloudflare :: Timed out contacting the origin server
  _connectionTimedOut,
  // UNOFFICIAL :: Cloudflare :: Could not reach the origin server; for example,
  // if the DNS records for the origin server are incorrect or missing.
  _originIsUnreachable,
  // UNOFFICIAL :: Cloudflare :: Was able to complete a TCP connection to the
  // origin server, but did not receive a timely HTTP response.
  _aTimeoutOccurred,
  // UNOFFICIAL :: Cloudflare :: Could not negotiate a SSL/TLS handshake with
  // the origin server.
  _SSLHandshakeFailed,
  // UNOFFICIAL :: Cloudflare :: could not validate the SSL certificate on the
  // origin web server. Also used by Cloud Foundry's gorouter.
  _invalidSSLCertificate,
  // UNOFFICIAL :: Cloudflare :: This indicates an interrupted connection
  // between Cloudflare and the origin server's Railgun server
  _railgunError,
  // UNOFFICIAL :: Cloudflare :: Error 530 is returned along with a 1xxx error
  _cloudflare530,

  /**
   * @brief AWS Elastic Load Balancer
   *
   */

  // UNOFFICIAL :: AWS Elastic Load Balancer :: Client closed the connection
  // with the load balancer before the idle timeout period elapsed. Typically
  // when client timeout is sooner than the Elastic Load Balancer's timeout.
  _closedConnectionBeforeTimeout = 460,
  // UNOFFICIAL :: AWS Elastic Load Balancer :: The load balancer received an
  // X-Forwarded-For request header with moer than 30 IP addresses.
  _manyIPAddressesInXForwardedForHeader = 463,

  // UNOFFICIAL :: AWS Elastic Load Balancer :: An error around authentication
  // returned by a server registered with a load balancer. You configured a
  // listener rule to authenticate users, but the identity provider (IdP)
  // returned an error code when authenticating the user.
  _unauthorizedByIdentityProvider = 561,
};

std::string statusToReasonPhrase(StatusCode c);

} // namespace axe

#endif