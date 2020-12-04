#include <iostream>
using namespace std;
int main ()
{
    int num,n, A, med;
    cout<<"digite el numero de datos que va a utilizar"<<endl;
    cin>>num;
    int arreglo[num];
    for (int i=0; i<num; i++)
    {
        cout<<"digite los numeros"<<endl;
        cin>>n;
        arreglo[i] = n;
    }
    for (int i=0; i<num; i++)
    {
        for (int j=0; j<num; j++)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                A = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = A;
            }   
        }
    }
    for (int i=0; i<num; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    if (num % 2 == 0)
    {
        med=(num/2)-1;
        cout<<" mediana = "<<arreglo[med]<<endl;
    }
     if (num % 2 != 0)
    {
        med=(num/2);
        cout<<"mediana = "<<arreglo[med]<<endl;
    }
    return 0;
}