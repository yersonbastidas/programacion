#include <iostream>
using namespace std;

//integrantes= Yerson Alexander Bastidas Muñoz-1004743626 Michael Steven Bedoya-1004669019
long * pascal(int fila) 
{
   long * triangulo;
   
   triangulo = new long[fila * fila]; 
  
   for (int i = 0; i < fila; i++)
       for (int j = 0; j <= i; j++)
            if (j != 0 && j != i)
                triangulo[i * fila + j] = triangulo[(i - 1) * (fila) + j] + triangulo[ (i - 1) * (fila) + j - 1];
            else
                *(triangulo + (i * fila + j)) = 1;
   long * Ultima = new long[fila]; 
   for (int i = 0; i < fila; i++)
       Ultima[i] = triangulo[(fila - 1) * fila + i];
    
   delete (triangulo);
  return Ultima;

 
}
long * pascal2(int filaB)
{
   long * triangulo;

   triangulo = new long[filaB * filaB]; 
  
   for (int i = 0; i < filaB; i++)
       for (int j = 0; j <= i; j++)
            if (j != 0 && j != i)
                triangulo[i * filaB + j] = triangulo[(i - 1) * (filaB) + j] + triangulo[ (i - 1) * (filaB) + j - 1];
            else
                *(triangulo + (i * filaB + j)) = 1;
   long * Ultima = new long[filaB]; 
   for (int i = 0; i < filaB; i++)
       Ultima[i] = triangulo[(filaB - 1) * filaB + i];
    
   delete (triangulo);
  return Ultima;
}
  
int main() {
    
    int fila1,suma,fila2;
    cout<<"ingrese el numero de fila 1:";
    cin>>fila1;
    cout<<"ingrese el numero de la fila 2:";
    cin>>fila2;
    long * fila = pascal(fila1);
    for (int j = 0; j < fila1; j++)
      cout << *(fila + j) << " "<<endl;
     
   delete (fila);
  
   long * filaB = pascal2(fila2);
    for (int j = 0; j < fila2; j++)
      cout << *(filaB + j) << " ";
     
    delete (filaB); 
   
    
    cin.sync();
    cin.get();
    return 0;
}