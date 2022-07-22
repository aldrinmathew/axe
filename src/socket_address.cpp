#include "axe/socket_address.hpp"

namespace axe {

SocketAddress::SocketAddress(sockaddr_in value)
    : isIPv6(false), address{.v4 = value} {}

SocketAddress::SocketAddress(sockaddr_in6 value)
    : isIPv6(true), address{.v6 = value} {}

SocketAddress::generic SocketAddress::getGeneric(sockaddr_in v4Val) {
  return SocketAddress::generic{.v4 = v4Val};
}

SocketAddress::generic SocketAddress::getGeneric(sockaddr_in6 v6Val) {
  return SocketAddress::generic{.v6 = v6Val};
}

sockaddr_in &SocketAddress::getIPv4() { return address.v4; }

sockaddr_in6 &SocketAddress::getIPv6() { return address.v6; }

bool SocketAddress::isV4() const { return !isIPv6; }

bool SocketAddress::isV6() const { return isIPv6; }

} // namespace axe