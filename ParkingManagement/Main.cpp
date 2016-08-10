#include"Parking.h"

int main()
{
    User u[10] ;
//VTYPE vehicleType,string registrationNumber,int debitCardNumber
    Admin a;
    a.setslots(100,2);
    u[0].registerVehivle(FOURWHEEL,"dsd",32234,EMP);
    u[1].registerVehivle(FOURWHEEL,"d2sd",32234,EMP);
    u[2].registerVehivle(FOURWHEEL,"d2sd",32265,VIS);
    u[0].park();
    u[0].calPayment();
    cout<<u[0].makePayment()<<endl;
    u[1].park();
    u[1].unpark();
    u[1].calPayment();
    //u[1].unpark();
    u[2].park();
    u[2].unpark();
    u[2].park();
    u[2].unpark();
    cout<<"\n"<<u[1].makePayment()<<endl;

    return 0;
}
