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

  string test;

  for(auto t : myTasks){
    if (t.isDone()){test = "V";} else {test = "X";}
    cout << t.getContent() << " | Status : " << test << endl;
  }

  return 0;
}
