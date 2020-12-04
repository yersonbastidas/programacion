#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num, n=1;
float medg,numeros;
cout<<"digite la cantidad de numeros"<<endl,
cin>>num;
int Arreglo[num];
cout<<"porfavor digite los datos"<<endl;
for ( int i = 0; i < num; i++)
{
cin>>numeros;
Arreglo[i]=numeros;
}
for ( int i = 0; i < num; i++)
{
 n=n*Arreglo[i];
}
medg=pow(n,1/num);
cout<<"La media geometrica es igual a "<<endl;
cout<<medg;
}