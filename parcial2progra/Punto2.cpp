#include <iostream>
#include <string>
using namespace std;
 
 struct datosEstudiante
    {
        string nombre;
        int codigo;
        int edad;
        int semestre;

    };

int main(int argc,char**argv)
{
    datosEstudiante x[2];
    x[0].nombre ="maicol steven ";
    x[0].codigo=1004669019;
    x[0].edad =18;
    x[0].semestre = 4;

    x[1].nombre =" yerson alexander ";
    x[1].codigo = 1004743626;
    x[1].edad = 18;
    x[1].semestre = 4;
    
    for(int i=0;i<2;i++)
    {
        cout<<endl;
        cout<<"Nombre"<<" "<<x[i].nombre<<endl;
        cout<<"codigo"<<" "<<x[i].codigo<<endl;
        cout<<"Edad"<<" "<<x[i].edad<<endl;
        cout<<"Semestre"<<" "<<x[i].semestre<<endl;
    }cout<<endl;
    
    return 0;
}

//integrantes= Yerson Alexander Bastidas Muñoz-1004743626 Michael Steven Bedoya-1004669019