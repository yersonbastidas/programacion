#include<iostream>

using namespace std;

int main ()
{ 
    int a, suma=0;
    cout<<"digite el numero hasta el cual desea sumar los pares"<<endl;
    cin>>a;
    int arreglo[a/2];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < (a/2)+1; i++)
    {
        parreglo[i]=i*2;
        cout<<parreglo[i]<<" ";
        suma=parreglo[i]+suma;
        
    }
    cout<<" la suma de los numeros es "<<endl<<suma;
    

}
