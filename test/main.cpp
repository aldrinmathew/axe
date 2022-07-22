#include "axe/server.hpp"
#include <iostream>

#define SHOW(val)                                                              \
  std::cout << "\e[44m"                                                        \
            << " TESTLOG "                                                     \
            << "\e[0;34m " << val << "\e[0m"                                   \
            << "\n";

int main(int count, const char **args) {
  SHOW("Creating server")
  auto server = axe::Server();
  SHOW("About to listen")
  server.listen("127.0.0.1", 8080);
  SHOW("Server exited")
  return 0;
}