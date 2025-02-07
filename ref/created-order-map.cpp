//TODO: refactoring of the whole code
#include <algorithm>
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

  /*----------creation-------------*/
  cout << '\n';
  std::map<string, int> names;
  std::vector<string> order;
  names["a"] = 34;
  order.push_back("a");
  names["o"] = 24;
  order.push_back("o");
  names["s"] = 30;
  order.push_back("s");
  names["["] = 3;
  order.push_back("[");
  names["k"] = 10;
  order.push_back("k");
  names["w"] = 301;
  order.push_back("w");
  names["q"] = 90;
  order.push_back("q");
  names["b"] = 11;
  order.push_back("b");
  names["Z"] = 4;
  order.push_back("Z");

  cout << "BINA ORDER KE\n";
  for (std::map<string, int>::iterator i{names.begin()}; i != names.end();
       i++) {
    cout << i->first << ':' << i->second << "  ; ";
  }
  cout << '\n';

  /*-------------access-----------------*/
  cout << "ORDER ME\n";
  for (std::vector<string>::iterator vi{order.begin()}; vi != order.end();
       vi++) {
    cout << *vi << ':' << names[*vi] << "  ; ";
  }
  cout << '\n';

  /*--------------deletion-------------*/
  string keyToDeleteInMap{"q"};
  // delete from vector and map separately
  vector<string>::iterator iteratorToDeleteInVector{};
  iteratorToDeleteInVector =
      std::find(order.begin(), order.end(), keyToDeleteInMap);
  order.erase(iteratorToDeleteInVector);
  names.erase(keyToDeleteInMap);
  cout << "Delete Karke ->\n";
  for (std::vector<string>::iterator vi{order.begin()}; vi != order.end();
       vi++) {
    cout << *vi << ':' << names[*vi] << "  ; ";
  }
  cout << '\n';


  /*-------------update------------------*/
  string keyToUpdateInMap { "Z" };
  int newValue = -176230;
  names[keyToUpdateInMap] = newValue;
  cout << "Update Karke ->\n";
  for (std::vector<string>::iterator vi{order.begin()}; vi != order.end();
       vi++) {
    cout << *vi << ':' << names[*vi] << "  ; ";
  }
  cout << '\n';


  return 0;
}
