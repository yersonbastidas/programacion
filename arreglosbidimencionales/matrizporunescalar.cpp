#include <iostream>
#include <math.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int main()
{
    int nf,nc, n, a;
    cout<<"por favor ingrese por cual numero quiere multiplicar la matriz"<<endl;
    cin>>a;
    cout<<"Por favor ingrese el numero de filas de su arreglo"<<endl;
    cin>>nf;

    cout<<"Por favor ingrese el numero de columnas de su arreglo"<<endl;
    cin>>nc;

    int matrizA[nf][nc], matrizB[nf][nc];
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<"por favor digite los valores de la matrizA"<<endl;
            cin>>n;
            matrizA[i][j]=n;
        }
    }cout<<"la matriz que digito es"<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizA[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            matrizB[i][j]=matrizA[i][j]*a;
        }
    }cout<<"la matriz multiplicada por el escalar es"<<endl;
    for(int i=0;i<nf;i++)
    {
        for(int j=0;j<nc;j++)
        {
            cout<<matrizB[i][j]<<" ";
        }cout<<endl;
    }
        
}