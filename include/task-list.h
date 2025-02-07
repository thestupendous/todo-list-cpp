#ifndef TASKLIST_H
#define TASKLIST_H

#include <cereal/cereal.hpp>
#include <string>
#include <vector>
using std::string, std::vector, std::string_view;

class TaskList {
public:
  TaskList() {}
  TaskList(string type) : topic{type} {}
  void add(string_view task) { tasks.push_back(static_cast<string>(task)); }

  #if 0
  template <class Archive> void serialize(Archive &archive) {
    archive(CEREAL_NVP(topic), CEREAL_NVP(tasks));
  }
  #endif

  void print() const;
  void addTasks(const vector<string> &);

private:
  string topic{"?"};
  std::vector<string> tasks;
};

#endif // !TASKLIST_H
