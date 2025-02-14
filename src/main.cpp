#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include "task-list.h"
using std::cin, std::cout, std::string, std::string_view, std::vector;

string readUsingGetline() { return "idf\nsldf"; }

void printArgMsg() { cout << "Usage -> 'todo [task-type]'\nExiting ... .. "; }
int main(int argc, char *argv[]) {
  /*---------------process cmd arguments----------------*/
  string taskType{"?"};
  cout << argc << '\n';
  if (argc != 2) {
    printArgMsg();
    return 1;
  } else {
    taskType = *(argv + 1);
  }

  char readOrWrite{'\0'};
  cout << "Read or Write? [r/w] : ";
  cin >> readOrWrite;

  if (readOrWrite == 'w') {
    /*------------write---------------*/
    char conti{'y'};
    while (conti == 'y') {

      cout << "enter more tasks ? [y/n] : ";
      cin >> conti;
    }
  }
  return 0;
}
