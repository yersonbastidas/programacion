#include<iostream>

using namespace std;


int main ()
{ 
   int arreglo[4][5]; 
   int numero1=0, numero2=1, suma;
   for (int i = 0; i < 4; i++)
   {
       for (int j = 0; j < 5; j++)
       {
          suma=numero1+numero2;
           arreglo[i][j]=suma;
           numero1=numero2;
           numero2=suma;
       }
       

   }
    for (int i = 0; i < 4; i++)
   {
       for (int j = 0; j < 5; j++)
       {
         cout<<arreglo[i][j]<<"  ";
       }
       cout<<"  "<<endl;
   }
   
   
  
   
   return 0;

}