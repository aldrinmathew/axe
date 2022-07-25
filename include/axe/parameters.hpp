#ifndef AXE_PARAMETERS_HPP
#define AXE_PARAMETERS_HPP

#include <string>
#include <vector>

namespace axe {

class ParameterValue {
private:
  friend class Parameters;
  std::string value;
  bool has;
  ParameterValue(bool _has, std::string _value);

public:
  explicit operator bool() noexcept;
  std::string get() const;
};

class Parameters {
private:
  std::vector<std::string> names;
  std::vector<std::string> values;

  friend class Request;
  friend class Route;
  void add(const std::string name, const std::string value);

public:
  Parameters();

  bool has(const std::string name) const;
  std::string get(const std::string name) const;
  std::vector<std::pair<std::string, std::string>> getAll() const;

  ParameterValue operator[](std::string name) const;
};

} // namespace axe

#endif