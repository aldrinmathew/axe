#include "axe/parameters.hpp"

namespace axe {

ParameterValue::ParameterValue(bool _has, std::string _value)
    : value(_value), has(_has) {}

ParameterValue::operator bool() noexcept { return has; }

std::string ParameterValue::get() const { return value; }

Parameters::Parameters() {}

void Parameters::add(const std::string name, const std::string value) {
  if (!has(name)) {
    names.push_back(name);
    values.push_back(value);
  }
}

bool Parameters::has(const std::string name) const {
  for (auto &n : names) {
    if (n == name) {
      return true;
    }
  }
  return false;
}

std::string Parameters::get(const std::string name) const {
  for (std::size_t i = 0; i < names.size(); i++) {
    if (names.at(i) == name) {
      return values.at(i);
    }
  }
  return "";
}

std::vector<std::pair<std::string, std::string>> Parameters::getAll() const {
  std::vector<std::pair<std::string, std::string>> result;
  for (std::size_t i = 0; i < names.size(); i++) {
    result.push_back(std::pair(names.at(i), values.at(i)));
  }
  return result;
}

ParameterValue Parameters::operator[](std::string name) const {
  for (std::size_t i = 0; i < names.size(); i++) {
    if (names.at(i) == name) {
      return ParameterValue(true, values.at(i));
    }
  }
  return ParameterValue(false, "");
}

} // namespace axe