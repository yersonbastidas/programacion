#include<iostream>

using namespace std;

int main ()
{ 
    int arreglo[100];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < 100; i++)
    {
        parreglo[i]=1;
        cout<<parreglo[i]<<" ";

    }
    



    
}
