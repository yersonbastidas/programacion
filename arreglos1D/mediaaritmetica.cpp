#include<iostream>

using namespace std;

int main ()
{ 
    int num;
    float n, prom, suma=0;
    cout<<"calcular la media aritmetica"<<endl;
    cout<<"por favor digite el total de numeros"<<endl;
    cin>>num;
    int arreglo[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"porfavor digite los numeros"<<endl;
        cin>>n;
        arreglo[i]=n;
        cout<<arreglo[i];

    }
    for (int i = 0; i < num; i++)
    {
        suma=arreglo[i]+suma;
    }
    
    cout<<"la media aritmetica es"<<endl;
    for (int i = 0; i < num; i++)
    {
        prom=(suma/num);
        
    }
    cout<<endl<<prom;

  
    
   
    


    return 0;
}