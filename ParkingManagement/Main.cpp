#include"Parking.h"

int main()
{
    User u[2] ;
//VTYPE vehicleType,string registrationNumber,int debitCardNumber
    Admin a;    a.setslots(100,1);
    u[0].registerVehivle(FOURWHEEL,"dsd",32234,EMP);
    u[1].registerVehivle(FOURWHEEL,"d2sd",32234,EMP);
    u[2].registerVehivle(FOURWHEEL,"d2sd",32265,VIS);
    u[0].park();
    u[0].calPayment();
    //cout<<u[0].makePayment()<<endl;
    u[1].park();
    a.generateReport(u)

    return 0;
}
