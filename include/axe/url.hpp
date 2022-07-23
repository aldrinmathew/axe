#ifndef AXE_URL_HPP
#define AXE_URL_HPP

#include <string>
#include <vector>

namespace axe {

class Url {
public:
  static char decodeCharacter(const std::string h);
  static std::string encodeCharacter(const char c);
};

} // namespace axe

#endif