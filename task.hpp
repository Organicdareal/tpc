#ifndef Task_HPP
#define Task_HPP

#include <string>

class Task{
  public:
    Task();
    Task(int id, std::string content, bool done);
  private:
    int id;
    std::string content;
    bool done;
};

#endif
