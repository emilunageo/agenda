#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <string>
#include "Activity.h"
using namespace std;

class Event : public Activity{
private:
    string startDateAndHour;
    string finishDateAndHour;
public:
    Event(string name, string description, string sdh, string fdh) : Activity(name, description) {
        startDateAndHour = sdh;
        finishDateAndHour = fdh;
    };
    //Setters
    void setStartDateAndHour(string sdh){
        startDateAndHour = sdh;
    };
    void setFinishDateAndHour(string fdh) {
        finishDateAndHour = fdh;
    };
    //Getters
    string getStartHourAndDate(){
        return startDateAndHour;
    }
    string getFinishHourAndDate(){
        return finishDateAndHour;
    }
};


#endif