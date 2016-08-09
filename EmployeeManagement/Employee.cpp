#include "Employee.h"
#include <iostream>
using namespace std;
 Employee::Employee(int empid)
    {
        emp_id = empid;
    }
    void Employee::display()
    {
        cout<<emp_id;
    }

