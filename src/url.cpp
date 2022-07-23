#include "axe/url.hpp"
#include <ios>
#include <sstream>

namespace axe {

char Url::decodeCharacter(const std::string h) {
  if (h.find('%') == 0) {
    return std::stoi(h.substr(1), 0, 16);
  } else {
    return '\0';
  }
}

std::string Url::encodeCharacter(const char c) {
  std::stringstream ss;
  ss << std::hex << c;
  return "%" + ss.str();
}

} // namespace axe