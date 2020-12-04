#include<iostream>
#include<math.h>

using namespace std;
float areacir(float r);

int main ()
{ 
    float r, res;
    cout<<"porfavor ingrese el radio de el circulo"<<endl;
    cin>>r;
    res=areacir(r);
    cout<<res<<endl;

}
float areacir(float r)
{
    float area;
    area= 3.1416*pow(r,2);
    return area;
}