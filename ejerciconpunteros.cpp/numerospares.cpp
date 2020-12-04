#include<iostream>

using namespace std;

int main ()
{ 
    int arreglo[50];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < 51; i++)
    {
        parreglo[i]=i*2;
        cout<<parreglo[i]<<" ";
    }
    
    

}
