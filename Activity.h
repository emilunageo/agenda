#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <iostream>
#include <string>
using namespace std;

class Activity {
    protected:
        string name;
        string description;

    public:
    // Constructor
        Activity(string name, string description) {
            this->name = name;
            this->description = description;
        }
    //Setters
        void setName(string name){
            this->name = name;
        }
        void setDescription(string description){
            this->description = description;
        }
    // Getters
        string getName(){
            return this->name;
        }
        string getDescription(){
            return this->description;
        }
};

#endif