#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main ()
{ 
    int n;
    cout<<"digite el escalar"<<endl;
    cin>>n;
    int arreglo[50];
    int *parreglo=&arreglo[0];
    cout<<" el arreglo aleatorio es"<<endl;
    for (int i = 0; i < 50; i++)
    {
        parreglo[i]=1 + rand()% 50;
        cout<<parreglo[i]<<" ";
    }
    cout<<"el arreglo multiplicado por el escalar es"<<endl;
    for (int i = 0; i < 50; i++)
    {
       cout<<parreglo[i]*n<<" ";
    }
    
    



    
}
