#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int arreglo[50], num;
    cout<<"porfavor digite el escalar para multiplicar el vector"<<endl;
    cin>>num;
    for (int i = 0; i < 50; i++)
    {
        arreglo[i]=1 + rand()% 50;
    
    }
    cout<<"el vector de numeros aleatorios es "<<endl;
    for (int i = 0; i < 50; i++)
    {
       cout<<arreglo[i]<<" , ";
    
    } 
    cout<<"el vector multiplicadopor el escalar es"<<endl;
     cout<<"el vector de numeros aleatorios es "<<endl;
    for (int i = 0; i < 50; i++)
    {
       cout<<arreglo[i]*num<<" , ";
    
    }

    

    return 0;
}
