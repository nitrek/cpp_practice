#include"Parking.h"
int Admin::freeSlots=5;
int Admin::numberOfSlots=100;
int Admin::totalVisits=0;
void Admin::freeSlot()
{
    Admin::freeSlots++;

}

void Admin::getFreeSlots() const
{

    cout<< "number of free slots = " << freeSlots<<endl;
}


void Admin::setslots(int total, int free)
{

    numberOfSlots = total;
    freeSlots = free;

}

bool Admin::takeSlot()
{

    if(freeSlots>0)
    {
        freeSlots--;
        totalVisits ++;
        return true;
    }
    return false;

}

void Admin::generateReport() const
{
    cout<<"\ntotal slots = "<<numberOfSlots;
    cout<<"\ntotal slots free= "<<freeSlots;
    cout<<"\ntotal visits "<<totalVisits;


}
