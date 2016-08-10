#include"Parking.h"
void freePark(User u)
{
    if(u.parkingFee>0)
    {
        u.amount = u.amount - u.parkingFee;
        u.parkingFee = 0;
    }
}
int main()
{
    User u[10] ;
//VTYPE vehiceType,string registrationNumber,int debitCardNumber
    Admin a;
    a.setslots(100,2);
    u[0].registerVehivle(FOURWHEEL,"dsd",32234,EMP);
    u[1].registerVehivle(FOURWHEEL,"d2sd",32234,EMP);
    u[2].registerVehivle(FOURWHEEL,"d2sd",32265,VIS);
    u[0].park();
    u[0].calPayment();
    freePark(u[0]);

    cout<<u[0].makePayment()<<endl;
      u[1].park();
      u[2].park();
       a.generateReport();

    u[1].unpark();
    u[1].calPayment();
    //u[1].unpark();
    u[2].park();
    u[2].unpark();
    cout<<"\n"<<u[2].calPayment()<<endl;
    cout<<"\n pre"<<u[2].makePayment()<<endl;
    u[2].registerVehivle(TWOWHEEL,"d2sd",32265,VIS);
    u[2].park();
    u[2].unpark();
    cout<<"\n "<<u[2].calPayment()<<endl;
    cout<<"\n post "<<u[2].makePayment()<<endl;
    cout<<"\n"<<u[2].getVisits()<<endl;
    a.generateReport();
    return 0;
}
