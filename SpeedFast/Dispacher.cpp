#include"SpeedFast.h"

int Dispacher::totalPaymentRecived = 0;
int Dispacher::totalNumberOfDispachers = 0;
Dispacher::Dispacher()
{
    totalNumberOfDispachers++;
    id = totalNumberOfDispachers;
}
void Dispacher::recieveShipment(Shipment &shipment)
{
    shipment.updateStatus(RECIVED);
}

int Dispacher::recivePayment(Shipment &shipment)
{
    totalPaymentRecived = totalPaymentRecived + shipment.calculateAmount();
 return shipment.getAmount();
}

void Dispacher::disptachShipment(Shipment &shipment)
{
    shipment.updateStatus(DISPACHED);
}

void Dispacher::printTotalAmount()
{
    cout<<"\nTotal Payment Received:\t"<<totalPaymentRecived<<" by dispatcher id "<<id;
}
