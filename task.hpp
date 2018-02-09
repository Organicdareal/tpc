#ifndef Task_HPP
#define Task_HPP

#include <string>

class Task{
  public:
    Task();
    Task(std::string content, bool done);
    std::string getContent();
    bool isDone();
  private:
    std::string content;
    bool done;
};

#endif
