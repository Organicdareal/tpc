#include <stdio.h>
#include <iostream>
#include "task.hpp"

using namespace std;

string list[4] = {"Manger du poulet", "Invoquer Satan", "Tuer une chevre", "Ecouter gojira"};
Task myTasks[4];

createList(){
  for (int i = 0; i <= 3; i++){
    Task task(list[i], false);
    myTasks[i] = task;
  }
}

int main(void){
  createList();

  cout << "ToDo List : " << endl;

  for(auto t : myTasks){
    cout << t->content << " | Status : " << if (t->done){"V"} else {"X"} << endl;
  };

  return 0;
}
