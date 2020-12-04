#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{ 
    int  vmin=9999,n,c;
    cout<<"por favor ingrese el valor n de filas"<<endl;
    cin>>n;
    cout<<"Por favor ingrese el calor de n columnas"<<endl;
    cin>>c;
    int   matriz[n][c];
    int *pmatriz=&matriz[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pmatriz[i*n+j]= rand() % 100;
            if (pmatriz[i*n +j]<vmin)
            {
                vmin= pmatriz[i*n +j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<pmatriz[i*n+j]<<" ";
                    
        }cout<<endl;  
    }
    cout<<"el valor minimo es "<<endl;
    cout<<vmin;
    
    
}