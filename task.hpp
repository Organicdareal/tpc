#ifndef Task_HPP
#define Task_HPP

#include <string>

class Task{
  public:
    Task(std::string content, bool done);
  private:
    std::string content;
    bool done;
};

#endif
