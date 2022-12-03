#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include "Activity.h"
#include <vector>

using namespace std;

class Agenda{
private:
    vector<Activity> activities;
public:
    Agenda(){};
    //Getters
    vector<Activity> getActivities() {
        return activities;
    }
    void addActivities(Activity act){
        activities.push_back(act);
    }

    void showActivities(){
        for (int i = 0; i < activities.size(); i++)
        {
            cout << activities[i].getName() << endl;
        }
    }
};


#endif