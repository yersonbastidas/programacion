#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int n, num=0;
    cout<<"por favor digite de cuantas posiciones quiere el arrglo"<<endl;
    cin>>n;
    int arreglo[n];
    int *parreglo=&arreglo[0];
    for (int i = 0; i < n; i++)
    {
       parreglo[i]=1 + rand()% 50;
       
        

    }
    
    
    for (int i = 0; i < n; i++)
    {
       cout<<parreglo[i]<<" "; 

    }cout<<endl;
    cout<<"los numeros pares son"<<endl;
    for (int i = 0; i < n; i++)
    {
         if (parreglo[i]%2==0)
        {
            
            cout<<parreglo[i]<<" ";
        }
    }
    

}
    