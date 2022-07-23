#ifndef AXE_LOG_HPP
#define AXE_LOG_HPP

#include <iostream>

#define ERROR(val)                                                             \
  std::cout << "\e[41m"                                                        \
            << " ERROR "                                                       \
            << "\e[0;31m " << val << "\e[0m\n";

#define LOG(val)                                                               \
  std::cout << "\e[43m"                                                        \
            << " AXE "                                                         \
            << "\e[0;33m " << val << "\e[0m\n";

#if IS_DEBUG_MODE
#define DLOG(val)                                                              \
  std::cout << "\e[44m"                                                        \
            << " DEBUG "                                                       \
            << "\e[0;34m " << val << "\e[0m"                                   \
            << "\n";
#else
#define DLOG(val)
#endif

#endif