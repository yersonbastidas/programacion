#include <iostream>
using namespace std;

int main()
{
    int A[20][20], B[20][20], C[20][20];
    int n, p, q;

    cout<<"Lectura de matriz A."<<endl;
    cout<<"Filas de A: "; cin>>n;
    cout<<"Columnas de A: "; cin>>p;
    cout<<endl;
    for(int i=0; i<n; ++i)
    { 
        for(int j=0; j<p; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }
    cout<<"Lectura de matriz B."<<endl;
    cout<<"Filas de B: "<<p<<" (ya esta definido y es necesario)."<<endl;
    cout<<"Columnas de B: "; cin>>q;
    cout<<endl;
    for(int i=0; i<p; ++i)
    {    
        for(int j=0; j<q; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            C[i][j] = 0;
        }
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            for(int z=0; z<p; ++z)
            {
                C[i][j] += A[i][z] * B[z][j];
            }
        }
    }    
    cout<<"Matriz A: "<<endl;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<p; ++j)
        {
            cout<<A[i][j]<<" ";
        }
       cout<<endl;
    }
    cout<<"Matriz B: "<<endl;
    for(int i=0; i<p; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz C: "<<endl;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<q; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}