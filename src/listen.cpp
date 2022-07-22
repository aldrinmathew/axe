#include "axe/listen.hpp"
#include "sys/socket.h"

namespace axe {

int socketListen(int fd, int queueCount) { return listen(fd, queueCount); }

} // namespace axe