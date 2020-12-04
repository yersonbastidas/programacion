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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j]= rand() % 100 + 0;
            if (matriz[i][j]<vmin)
            {
                vmin= matriz[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<matriz[i][j]<<" ";
                    
        }cout<<endl;  
    }
    cout<<"el valor minimo es "<<endl;
     cout<<vmin<<endl;
}