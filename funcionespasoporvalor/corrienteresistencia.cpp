#include <iostream>
using namespace std;
float C(float V,float R);
int main()
{
float V, R, Res;
cout<<"por favor digite el valor de el voltaje en voltios"<<endl;
cin>>V;
cout<<"por favor digite el valor de la resistencia en ohm"<<endl;
cin>>R;
Res=C(V,R);
cout<<"la corriente  tiene un valor de "<<Res<<endl;
return 0; 
}
float C(float V,float R)
{
 float C=V/R;
 return C;
}