#include <iostream>
#include "task-list.h"

int main() {
  TaskList home("car");
  home.addTasks(vector<string> {"start","drive","park"});
  home.print();
  return 0;
}
