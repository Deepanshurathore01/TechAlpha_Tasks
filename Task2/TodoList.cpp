// Build a console-based to-do list Application. Users should
// be able to add tasks, mark them as completed, and view
// their current tasks.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class DailyTask{
  public:
  string description;
  bool completed;

  DailyTask(string description)
  {
    this->description=description;
    completed =false;
  }

  string getStatus() const{
     return completed?"Task is completed ":"Task is pending";
  }
};

class ToDoList {
private:
 vector<DailyTask> tasks;

 public:
//  method to add the taks in todlsit
 void addTask(const string& description)
 {
  tasks.push_back(DailyTask(description));
 }

// method to marking the task is complete or not 
 void markTaskCompleted(int index)
 {
  if(index >=0 && index < tasks.size())
  {
    tasks[index].completed =true;
  }
  else{
    cout<<"Invalid task index : "<<endl;
  }
 }

// method to view the tasks 
 void viewTasks() const{
  if(tasks.empty())
  {
    cout<<"No tasks in the list. "<<endl;
  }
  else{
    cout<<"Current Tasks:"<<endl;
    for(size_t i=0;i<tasks.size();++i)
    {
      cout<<i+1<<". "<<tasks[i].description<<" - "<<tasks[i].getStatus() <<endl;
    }
  }
 }

 void run()
 {
  while(true){
       cout << "\nTo-Do List Application" << endl; 
       cout << "1. Add Task" << endl;
       cout << "2. Mark Task as Completed" << endl;
       cout << "3. View Tasks" << endl;
       cout << "4. Exit" << endl;

       int choice;
       cout<<"Enter your choice : ";
       cin>>choice;
       cin.ignore(); 

       switch(choice)
       {
        case 1: {
        string description;
        cout<<"Enter the task to add: ";
        getline(cin,description);
        addTask(description);
        cout<<"Task added succesfully!"<<endl;
        break;
        }
       case 2: {
        viewTasks();
        int taskIndex;
        cout<<"Enter the task number to mark as completed:";
        cin>>taskIndex;
        markTaskCompleted(taskIndex-1);
        cout<<"Task marked as completed!"<<endl;
        break;
       }
        case 3:
         viewTasks();
         break;
        case 4:
         cout << "Exiting the application." << std::endl;
         return;
        default:
         cout << "Invalid choice. Please try again." << std::endl;
         break;
       }

  }
 }
};

int main() {
    ToDoList todoList;
    todoList.run();

    return 0;
}