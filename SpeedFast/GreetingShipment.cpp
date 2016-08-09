#include"SpeedFast.h"

using namespace std;

void GreetingShipment::setMessage(string msg)
{
    message = msg;
}

string GreetingShipment::getMessage(){

    return message;
}


void GreetingShipment::printDetails(){
Shipment::printDetails();
cout<<"\nShipment Message:\t"<<getMessage()<<endl;
}
