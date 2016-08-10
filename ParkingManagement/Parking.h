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
    bool parked;
    int amount;
public:
    static int totalusers;
    User();
    void registerVehivle(VTYPE vehicleType,string registrationNumber,int debitCardNumber,USERTYPE);
    int calPayment();
    int makePayment();
    bool park();
    void unpark();
    int getVisits() const;
    friend void freePark(User u);
};
class Admin
{
public:

    void setslots(int, int);
    void getFreeSlots() const;
    bool takeSlot();
    void freeSlot();
    void generateReport() const;
private:
    static int numberOfSlots;
    static int freeSlots;
    static int totalVisits;

};
#endif // PARKING_H_INCLUDED
