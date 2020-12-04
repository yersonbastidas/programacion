#include<iostream>

using namespace std;

int main ()
{ 
   int arreglo[50], num;
   cout<<"Por favor digite el numero por el cual desea multiplicar el vector"<<endl;
   cin>>num;
   for (int i = 0; i < 50; i++)
   {
       arreglo[i]=i+1;
   }
   for (int i = 0; i < 50; i++)
   {
       arreglo[i]=arreglo[i]*num;
   }
   for (int i = 0; i < 50; i++)
   {
       cout<<arreglo[i]<<" , ";
   }
   
  
    





    return 0;
}
