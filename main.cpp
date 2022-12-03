#include <iostream>
#include "Activity.h"
#include "Task.h"
#include "Agenda.h"
using namespace std;

int main()
{
    Task t1("Titulo 1", "Terminar código", "Por hacer");
    Task t2("Titulo 2", "Hola esté es un ejemplo", "Por hacer");

    t1.showTask();

    Agenda activities;
    activities.addActivities(t1);
    activities.addActivities(t2);

    activities.showActivities();

}