#include<iostream>

using namespace std;

int main ()
{ 
    int arreglo[10];
    int *parreglo=&arreglo[0];
    int n;
    for (int i = 0; i < 10; i++)
    {
       cout<<"por favor digite los 10 numeros"<<endl;
       cin>>n;
       parreglo[i]=n;
      

    }
    for (int i = 0; i < 10; i++)
    {
       
       cout<<parreglo[i]<<" ";

    }
    



    
}
