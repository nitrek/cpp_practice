#include"SpeedFast.h"
//#include<iostream>
//class Shipment{
//private:
//    int id;
//    string recipientAddress;
//    Customer sendingCustomer;
//    PRIORITYTYPES priority;
//    float weight;
//    Date dateofShipment;
//    Date dateOfDelivery;
//    STATUS status;
//public:
//    Shipment(int);
//    int calculateAmount();
//    int makeShipment(string,Customer,PRIORITYTYPES,float,Date,Date);
//};

using namespace std;
int Shipment::totalShipmentsRecived=0;
Shipment::Shipment()
{
    totalShipmentsRecived++;
    id=totalShipmentsRecived;
}
STATUS Shipment::getStatus()
{
    return status;
}
void Shipment::updateStatus(STATUS newStatus)
{
    status = newStatus;
}
void Shipment::makeShipment(string shipmentRecipientAddress,Customer shipmentSendingCustomer,PRIORITYTYPES shipmentPriority,float shipmentWeight,Date shipmentDate,Date deliveryDate)
{
    recipientAddress      = shipmentRecipientAddress;
    sendingCustomer       = shipmentSendingCustomer;
    priority              = shipmentPriority;
    weight                = shipmentWeight;
    dateofShipment        = shipmentDate;
    dateOfDelivery        = deliveryDate;
    status                = CREATED;

}
int Shipment::calculateAmount()
{
    amount = weight*10+100*priority;
    return amount;
}
int Shipment::getAmount()
{
    return amount;
}

void Shipment::printDetails(){
cout<<"\n ----------------------------------";
cout<<"\nShipment Id:\t"<<id;
cout<<"\nReceiver's Address:\t"<<recipientAddress;
sendingCustomer.printDetails();
cout<<"\nPriority:\t"<<priority;
cout<<"\nWeight:\t"<<weight;
cout<<"\nShipment Date:\t";dateofShipment.print();
cout<<"\nDelivery Date:\t";dateOfDelivery.print();
cout<<"\nStatus:\t"<<status;
cout<<"\nAmount:\t"<<amount;
cout<<"\n ----------------------------------";
}
