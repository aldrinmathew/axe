#ifndef AXE_SOCKET_BINDING_HPP
#define AXE_SOCKET_BINDING_HPP

#include <cstddef>

namespace axe {

int socketListen(int fd, int queueCount);

std::size_t socketWrite(int fd, const char *buffer, std::size_t len);

int socketClose(int fd);

} // namespace axe

#endif