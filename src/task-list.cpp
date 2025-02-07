#include "task-list.h"
#include <iostream>
using std::cout;

void TaskList::print() const {
  cout << topic << '\n';
  for (auto i{tasks.begin()}; i != tasks.end(); i++) {
    cout << "- " << *i << '\n';
  }
}

void TaskList::addTasks(const vector<string> &moreTasks) {
  tasks.insert(tasks.end(), moreTasks.begin(), moreTasks.end());
}
