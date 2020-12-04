#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
float diseucl(float x, float x1, float y, float y1);

int main ()
{ 
 float x, x1, y, y1;   
 cout<<"por favor digite las primeras coordenadas en x y y"<<endl;
 cin>>x;
 cin>>y;
 cout<<"por favor digitr las segundas coordenadas en el eje x y y"<<endl;
 cin>>x1;
 cin>>y1;
 cout<<"la distancia euclidiana es"<<endl;
 cout<<diseucl(x,y,x1,y1)<<endl;
}

float diseucl(float x, float x1, float y, float y1)
{
    float distanciaeucli= sqrt(pow (x1-x, 2.) +pow (y1-y, 2.));


    return distanciaeucli;
}

