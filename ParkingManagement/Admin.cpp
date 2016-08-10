#include"Parking.h"
int Admin::freeSlots=5;
int Admin::numberOfSlots=100;
void Admin::freeSlot()
{
    Admin::freeSlots++;

}

void Admin::getFreeSlots(){

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
            return true;
        }
    return false;

}

void Admin::generateReport(Users []u)
{

    cout<<"total slots = "<< numberOfSlots<< endl;
    cout<<"free slots available"<< freeSlots<<endl;
    for (int i=0,i<u.size(), i++)
    {
        cout<<"details of user "<< i << endl;
        cout<<u[i].get

    }
}
