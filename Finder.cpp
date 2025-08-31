#include "Finder.h"
#include <string>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
  std::vector<int> result;
  size_t current_start = 0;
  bool not_found = false;

  for (size_t i = 1; i <= s2.size(); i++) {
    if (not_found) {
      result.push_back(-1);
      continue;
    }
    size_t found = s1.find(s2.substr(0, i), current_start);
    if (found != std::string::npos) {
      result.push_back(static_cast<int>(found));
      current_start = found;
    } else {
      result.push_back(-1);
      not_found = true;
    }
  }
  return result;
}