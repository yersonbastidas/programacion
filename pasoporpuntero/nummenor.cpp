#include <iostream>
#include <stdlib.h>     
#include <time.h>    

using namespace std ;

void llenar (int *pmatriz,int n);
void imprimir (int*pmatriz,int n);
 
 int main()
 {
     int n=3, arreglo[n][n];
     llenar(&arreglo[0][0],n);
     imprimir(&arreglo[0][0],n);
     

 }
 void llenar (int *parreglo, int n)
 {
    int nummen= 999999;
     srand (time(NULL));
     for ( int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
           parreglo[i*n+j]=rand() % 10 + 1;
         if (parreglo[i*n+j]<nummen)
         {
           nummen = parreglo[i*n+j];
           
         }

         }
     }cout<<"el numero menor es ="<<nummen<<endl;
 }
 void imprimir (int*parreglo,int n)
 {
   for( int i=0;i<n;i++)
  {
     for (int j = 0; j <n; j++)
     {
        cout<<parreglo[i*n+j]<<" " ;
     }cout<<endl;
   }
 }