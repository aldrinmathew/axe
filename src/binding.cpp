#include "axe/binding.hpp"
#include "sys/socket.h"
#include "unistd.h"

namespace axe {

int socketListen(int fd, int queueCount) { return listen(fd, queueCount); }

std::size_t socketWrite(int fd, const char *buffer, std::size_t len) {
  return write(fd, buffer, len);
}

int socketClose(int fd) { return close(fd); }

} // namespace axe