#include <iostream>
#include "task.hpp"

using namespace std;

Task::Task(std::string content, bool done) : content(content), done(done)
{

}

Task::Task(){}

string Task::getContent(){
  return content;
}

bool Task::isDone(){
  return done;
}
