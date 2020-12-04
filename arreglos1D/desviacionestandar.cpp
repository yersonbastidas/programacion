#include<iostream>
#include<math.h>

using namespace std;

int main ()
{ 
     int num;
    float n, prom, desvi, res, suma=0, partedearriba, suma2=0;
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
    
    for (int i = 0; i < num; i++)
    {
        prom=(suma/num);
        
    }
    for (int i = 0; i < num; i++)
    {
        res=arreglo[i]-prom;
        suma2=suma2+res;
        partedearriba = pow(suma,2);
        
    }cout<<"la resta es"<<res<<endl;
    
    
    for (int i = 0; i < num; i++)
    {
       desvi= sqrt(partedearriba/(num-1));
      
    } cout<<"la desviacion estandar es"<<endl;
    cout<<desvi;
        
    


    return 0;
}
