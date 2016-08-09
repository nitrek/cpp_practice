#ifndef SPEEDFAST_H_INCLUDED
#define SPEEDFAST_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
enum PRIORITYTYPES {LOW=1,NORMAL=3,URGENT};
enum STATUS {CREATED=0,RECIVED,DISPACHED,DELIVERED};
typedef struct DateStructure
{
private:
    int day;
    int month;
    int year;
public:
    DateStructure(int,int,int);
    DateStructure();
    void print();
} Date;
class Customer
{
private:
    static int totalCustomers;
    int id;
    string address;
public:
    Customer();
    Customer(string);
    void printDetails();
};
class Shipment
{
private:
    static int totalShipmentsRecived;
    int id;
    string recipientAddress;
    Customer sendingCustomer;
    PRIORITYTYPES priority;
    float weight;
    Date dateofShipment;
    Date dateOfDelivery;
    STATUS status;
    int amount = 0;
public:
    Shipment();
    void makeShipment(string,Customer,PRIORITYTYPES,float,Date,Date);
    int calculateAmount();
    void updateStatus(STATUS);
    int getAmount();
    STATUS getStatus();
    void printDetails();
};
class Dispacher
{
private:
    static int totalPaymentRecived;
    static int totalNumberOfDispachers;
    int id;
public:
    Dispacher();
    void recieveShipment(Shipment&);
    int recivePayment(Shipment&);
    void disptachShipment(Shipment&);
    void printTotalAmount();
};



#endif // SPEEDFAST_H_INCLUDED
