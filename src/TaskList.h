#ifndef TASKLIST_H
#define TASKLIST_H
#include<string>
#include<string>


class TaskList {
private:
  string taskType{"?"};
  vector<string> tasks{};

public:
  TaskList() {}
  TaskList(string type) : taskType{type} {}
  void add(string_view task) { tasks.push_back(static_cast<string>(task)); }
  template <class Archive> void serialize(Archive &archive) {
    archive(CEREAL_NVP(taskType), CEREAL_NVP(tasks));
  }
};

#endif // !TASKLIST_H
