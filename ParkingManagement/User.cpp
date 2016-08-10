#include"Parking.h"
int User::totalusers =0;
User::User()
{
    totalusers++;
    userId =   totalusers;
}

void User::registerVehivle(VTYPE vehicleType,string registrationNumber,int debitCardNumber,USERTYPE ut)
{

    this->vehicleType = vehicleType;
    this->registrationNumber= registrationNumber;
    this->debitCardNumber=debitCardNumber;
    this->userType = ut;
}
 void User::calPayment()
 {
    if(userType == EMP)
      {
        if(vehicleType == TWOWHEEL)
            parkingFee = 100;
        if(vehicleType == FOURWHEEL)
            parkingFee = 200;
      }
    else
    {
         if(vehicleType == TWOWHEEL)
            parkingFee = 10;
        if(vehicleType == FOURWHEEL)
            parkingFee = 20;
    }
 }
 int User::makePayment(){
     return numberOfVisits*parkingFee;
 }

 bool User::park(){

 Admin a ;
 if(a.takeSlot())
 {
     parked = true;
 if(userType == VIS)
 {
    numberOfVisits++;
 }
 return true;
 }
 else{
        parked = false;
        cout<< "no slots available "<<userId<<endl;
return false;
 }
 }
 void User::unpark()
{

     Admin a ;
     if(parked)
     {
        a.freeSlot();
        cout<<"\nbye "<<userId;
     }
}
/*
void User::printDetails()
{

}

*/


