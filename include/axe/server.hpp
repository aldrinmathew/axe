#ifndef AXE_SERVER_HPP
#define AXE_SERVER_HPP

#include "axe/socket_address.hpp"
#include <string>
#include <vector>

namespace axe {

class Server {
private:
  int fd;

  SocketAddress *sockaddress;

  static std::vector<int> fds;

  static bool isExitHandlerSet;

public:
  Server();

  void listen(const char *addr, const int port, const bool isIPv6 = false);

  static void exitHandler(int);
};

} // namespace axe

#endif