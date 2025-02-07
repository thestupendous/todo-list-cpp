#include "task-list.h"
using std::cout;
void TaskList::print() const {
  cout << taskType << '\n';
  for (auto i{tasks.begin()}; i != tasks.end(); i++) {
    cout << "- " << *i;
  }
}

void TaskList::addTasks(const vector<string> &moreTasks) {
  tasks.insert(tasks.end(), moreTasks.begin(), moreTasks.end());
}
