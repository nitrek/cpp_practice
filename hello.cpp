#include<iostream>

using namespace std;
int gi =50;
 int &Sample(){
 	return gi;
 }
int main()
{
int i = Sample();
ifstream f1("input.txt");
cout<<i<<endl;
Sample() =200;
cout<<i<<endl;
}
