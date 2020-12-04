#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int n;
    cout<<"en pantalla le mostrara la matriz identidad"<<endl;

    cout<<"Por favor ingrese el numero de filas de la matriz identidad"<<endl;
    cin>>n;

    cout<<"Por favor ingrese el numero de columnas de la matriz identidad"<<endl;
    cin>>n;

    int iden[n][n];
    int *piden=&iden[0][0];
    cout<<endl<<endl<<"la matriz identidad es ="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if (i==j)
           {
               piden[i*n+j]=1;
           }
           else 
           {
               piden[i*n+j]=0;
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<iden[i][j]<<" ";
        }cout<<endl;
    }

}