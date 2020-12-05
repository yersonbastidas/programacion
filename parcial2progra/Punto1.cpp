#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//integrantes= Yerson Alexander Bastidas Muñoz-1004743626 Michael Steven Bedoya-1004669019

int main ()
{
  int n=3,A[n][n],contador;

  srand(time(NULL));
  for (int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          A[i][j]=rand() % 10 + 1;
          if(A[0][0]-A[i][j]==0)
          {
              contador++;
              cout<<" la cifra "<<A[i][j]<<" se repite "<<endl;
                    
          }
      } 
  }
  cout<<" el numero se repite" << " "<<contador<<" veces "<<endl;; 
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<endl; 
    }cout<<endl;

}