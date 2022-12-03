#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string>
#include "Activity.h"
using namespace std;

class Task : public Activity{
private:
    string status;
public:
    Task(string name, string description, string status) : Activity(name, description) {
        this->status = status;
    };
    void showTask(){
        cout << "---TASK---" << endl;
        cout << "Title: " + this->name + "\nDescription: \n" + this->description + "\nStatus: " +this->status << endl;
    }
};
#endif