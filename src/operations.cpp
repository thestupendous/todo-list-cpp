#include <cereal/archives/json.hpp>
#include <cereal/cereal.hpp>
#include <cereal/types/map.hpp>
#include <cereal/types/string.hpp>
#include <cereal/types/vector.hpp>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "task-list.h"
#include "normal-header.h"

using std::string, std::cout, std::cin, std::vector, std::map;

// Function to serialize the std::map
template <class Archive>
void serialize(Archive & archive, std::map<string,TaskList > & m) {
    archive(cereal::make_nvp("task-objects", m));  // Serialize the map with a name ("my_map")
}

void read() {
  // readfile
  string fileName{"my-todo-list.json"};
  std::ifstream readFile(fileName);

  // get map
  std::map<string, TaskList> mapList;
  std::vector<string> order;

  // print
}

void write() {
  map<string, TaskList> taskAll{}; // create new mapList
  vector<string> order{};          // create new order
  string topicToWrite{};
  cin >> topicToWrite;

  /*---------reaadfile------------*/

  /*------------get type----------------*/

  /*----------create, fill TaskList obj-----------*/
  string taskToWrite;
  vector<string> taskListToWrite{"Dummy Task"};
  taskListToWrite.push_back(taskToWrite);
  // TODO read multiple tasks here
  TaskList newTask{topicToWrite};    // create new obj
  newTask.addTasks(taskListToWrite); // fill object

  order.push_back(topicToWrite);   // add to order vec
  taskAll[topicToWrite] = newTask; // add to maplist

  /*--------------write to file------------------*/
  string mapFileName{"my-todo-list.json"};
  string orderFileName{"my-order.json"};
  std::ofstream writeFS(mapFileName);
  if (writeFS.good()) {
    cereal::JSONOutputArchive oArchive(writeFS);
    oArchive(taskAll);
  }
  writeFS.close();
  std::ofstream writeFS2(orderFileName);
  if (writeFS2.good()) {
      cereal::JSONOutputArchive oArchive(writeFS2);
      oArchive(cereal::make_nvp("order",order));
  }

}
void update() { ; }
void delete1() { ; }

int main() {
  write();
  return 0;
}
