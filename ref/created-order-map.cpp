#include <cstdint>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string, std::cout, std::vector;

int main() {
  vector<int> a{3, 4, 5, 6, 7, 8, 9, 10};

  uint8_t index = 3;
  a.erase(a.begin() + index);

  for (auto i{a.begin()}; i != a.end(); i++) {
    cout << *i << ',';
  }

  cout << '\n';
  std::map<string, int> names;
  names["a"] = 34;
  names["o"] = 24;
  names["s"] = 30;
  names["["] = 3;
  names["k"] = 10;
  names["w"] = 301;
  names["q"] = 90;
  names["b"] = 11;
  names["Z"] = 4;

  for (std::map<string, int>::iterator i{names.begin()}; i != names.end();
       i++) {
    cout << i->first << ':' << i->second << '\n';
  }

  return 0;
}
