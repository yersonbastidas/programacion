#include<iostream>

using namespace std;

int main ()
{ 
    int num;
    cout<<"porfavor ingrese el valor que representa la cantidad de el arreglo aleatirio"<<endl<<endl;
    cin>>num;
    int arreglo[num];
    for (int i = 0; i < num; i++)
    {
        arreglo[i]=1 + rand()% 100;
    }
    cout<<"el arreglo de numeros aleatorios es"<<endl<<endl;
     for (int i = 0; i < num; i++)
    {
       cout<<arreglo[i]<<" , ";
    }
    

    return 0;
}
