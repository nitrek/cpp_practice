#include"SpeedFast.h"
Date::DateStructure(int d,int m,int y)
{
    day   = d;
    month = m;
    year  = y;
}
Date::DateStructure()
{
    day   = 0;
    month = 0;
    year  = 0;

}
void Date::print()
{
    cout<<day<<"/"<<month<<"/"<<year;
}
