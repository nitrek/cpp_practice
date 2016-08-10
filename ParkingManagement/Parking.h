#ifndef PARKING_H_INCLUDED
#define PARKING_H_INCLUDED
#include <iostream>
using namespace std;
enum USERTYPE {EMP,VIS};
enum VTYPE {TWOWHEEL,FOURWHEEL};
class User
{
private:
    int userId;
    VTYPE vehicleType;
    string registrationNumber;
    int debitCardNumber;
    int parkingFee;
    USERTYPE userType;
    int numberOfVisits =1;
public:
    static int totalusers;
    User();
    void registerVehivle(VTYPE vehicleType,string registrationNumber,int debitCardNumber,USERTYPE);
    void calPayment();
    int makePayment();
    bool park();
    void unpark();
};
class Admin
{
public:

    void setslots(int, int);
    void getFreeSlots();
    bool takeSlot();
    void freeSlot();
    void generateReport();

private:
    static int numberOfSlots;
    static int freeSlots;

};
#endif // PARKING_H_INCLUDED
