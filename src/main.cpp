#include <cereal/archives/json.hpp>
#include <cereal/cereal.hpp>
#include <cereal/types/string.hpp>
#include <cereal/types/vector.hpp>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>

using std::cin, std::cout, std::string, std::string_view, std::vector;

class TaskList {
private:
  string taskType{"?"};
  vector<string> taskList{};

public:
  TaskList() {}
  TaskList(string type) : taskType{type} {}
  void add(string_view task) { taskList.push_back(static_cast<string>(task)); }
  template <class Archive> void serialize(Archive &archive) {
    archive(CEREAL_NVP(taskType), CEREAL_NVP(taskList));
  }
};

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
