#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int nc, n, nu;

    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nc;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nc][nc],matrizB[nc][nc], matrizC[nc][nc];
    int *pmatrizA=&matrizA[0][0];
    int *pmatrizB=&matrizB[0][0];
    int *pmatrizC=&matrizC[0][0];
    for(int i=0;i<nc;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<"por favor digite los valores de la matrizA"<<endl;
            cin>>n;
            pmatrizA[i*n+j]=n;
        }
    }
    for(int i=0;i<nc;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<"por favor digite los valores de la matrizB"<<endl;
            cin>>nu;
            pmatrizB[i*n+j]=nu;
        }cout<<endl;
    }
    for(int i=0;i<nc;i++)
    {
        for(int j=0;j<nc;j++)
        {
         pmatrizC[i*n+j]= pmatrizA[i*n+j]+pmatrizB[i*n+j];
        }
    }
    cout<<endl<<endl<<"matriz C ="<<endl;
    for(int i=0;i<nc;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<pmatrizC[i*n+j]<<" ";
        }cout<<endl;
    }
}