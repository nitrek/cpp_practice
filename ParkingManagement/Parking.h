#ifndef PARKING_H_INCLUDED
#define PARKING_H_INCLUDED
class users{
private:
    int userId;
    string vehicleType;
    string registrationNumber;
    int debitCardNumber;
    int parkingFee;
public:
    users(int userId);
    void registerVehivle(string vehicleType,string registrationNumber,int debitCardNumber);
    void makePayment();
    void park();
};
class admin{
    int numberOfSlots;
    int freeSlots;
public:
    void takeSlot();
    void freeSlot();
    void generateReport();

};
class visitors{
    int
};
#endif // PARKING_H_INCLUDED
