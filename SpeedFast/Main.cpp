#include"SpeedFast.h"
#include<iostream>
#include<fstream>
int main()
{
    ifstream cin("input.txt");
    Dispacher dispacher1;
    Shipment shipment1;
    Customer customer1("sender's address");

    shipment1.makeShipment("Receiver 1's address",customer1,NORMAL,12.4,Date(9,8,2016),Date(15,8,2016));
    shipment1.printDetails();

    dispacher1.recieveShipment(shipment1);
    dispacher1.recivePayment(shipment1);
    dispacher1.disptachShipment(shipment1);
    shipment1.printDetails();

    Shipment shipment2;
    shipment2.makeShipment("Receiver 2's address",customer1,NORMAL,13.4,Date(9,8,2016),Date(15,8,2016));
    shipment2.printDetails();

    dispacher1.recieveShipment(shipment2);
    dispacher1.recivePayment(shipment2);
    dispacher1.disptachShipment(shipment2);
    shipment2.printDetails();

    Customer customer2("sender2's address");

    Shipment shipment3;
    shipment3.makeShipment("Receiver 3's address",customer2,URGENT,17.4,Date(9,9,2016),Date(14,9,2016));
    shipment3.printDetails();

    dispacher1.recieveShipment(shipment3);
    dispacher1.recivePayment(shipment3);
    dispacher1.disptachShipment(shipment3);

    shipment3.printDetails();

    GreetingShipment shipment4;
    shipment4.makeShipment("Receiver 3's address",customer2,URGENT,17.4,Date(9,9,2016),Date(14,9,2016));
    shipment4.setMessage("hello world");
    shipment4.printDetails();

    dispacher1.recieveShipment(shipment4);
    dispacher1.recivePayment(shipment4);
    dispacher1.disptachShipment(shipment4);

    shipment4.printDetails();

    dispacher1.printTotalAmount();
    return 0;
}
