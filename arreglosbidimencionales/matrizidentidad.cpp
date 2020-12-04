#include <iostream>
#include <math.h>
#include <stdlib.h>   
#include <time.h>       

using namespace std;

int main()
{
    int f,c;
    cout<<"en pantalla le mostrara la matriz identidad"<<endl;

    cout<<"Por favor ingrese el numero de filas de la matriz identidad"<<endl;
    cin>>f;

    cout<<"Por favor ingrese el numero de columnas de la matriz identidad"<<endl;
    cin>>c;

    int iden[f][c];
    cout<<endl<<endl<<"la matriz identidad es ="<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
           if (i==j)
           {
               iden[i][j]=1;
           }
           else 
           {
               iden[i][j]=0;
           }
        }
    }
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<iden[i][j]<<" ";
        }cout<<endl;
    }

}