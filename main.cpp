#include <iostream>
#include "Activity.h"
#include "Task.h"
#include "Event.h"
#include "Agenda.h"
using namespace std;

int main()
{
    Task t1("Titulo 1", "Terminar código", "Por hacer");
    Task t2("Titulo 2", "Hola esté es un ejemplo", "Por hacer");
    Event e1("Evento temple", "Ser el presentador del evento", "13/12/2022", "13/12/2022");

    t1.showTask();
    e1.showEvents();

    Agenda activities;
    activities.addActivities(t1);
    activities.addActivities(t2);
    activities.addActivities(e1);

    activities.showActivities();

}