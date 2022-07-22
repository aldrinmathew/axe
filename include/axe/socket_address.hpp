#ifndef AXE_SocketAddress_HPP
#define AXE_SocketAddress_HPP

#include <netinet/in.h>

namespace axe {

struct SocketAddress {
  bool isIPv6;
  union generic {
    sockaddr_in v4;
    sockaddr_in6 v6;
  } address;
  static generic getGeneric(sockaddr_in v4);
  static generic getGeneric(sockaddr_in6 v6);

  SocketAddress(sockaddr_in value);
  SocketAddress(sockaddr_in6 value);

  sockaddr_in &getIPv4();
  sockaddr_in6 &getIPv6();

  bool isV4() const;
  bool isV6() const;
};

} // namespace axe

#endif