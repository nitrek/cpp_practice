#include"SpeedFast.h"
//class Customer{
//private:
//    int id;
//    string address;
//public:
//    Customer(int,string);
//};

using namespace std;
int Customer::totalCustomers =0;

Customer::Customer()
{

}
Customer::Customer(string customerAddress)
{   totalCustomers++;
    id = totalCustomers;
    address   = customerAddress;
}
void Customer::printDetails(){

cout<<"\nCustomer Id:\t"<<id;
cout<<"\nCustomer Address:\t"<<address;

}
