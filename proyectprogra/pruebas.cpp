 #include <iostream>
 #include <windows.h>

 using namespace std;

 COORD coord={0,0};
 void gotoxy(int x,int y)
 {
     coord.X=x;
     coord.Y=y;
 }

 void llenarmatriz(float *pnumeros, int n);
 void llenarigual (float *pigualA, int n);
 void imprimirmatriz(float *pnumeros, float *pigualA, int n);
 void matriz2x2(float *pnumeros,float *pigualA,int n );
 void matriz3x3(float *pnumeros,float *pigualA,int n);
 void matriz4X4(float *pnumeros,float *pigualA,int n);
 
  int main ()
  {
    int n=0;
     
      cout<<"digite el numero de incognitas de la matriz "<<endl;
      cin>>n;
    
    float numeros[50][50],igualA[n],determinante,detX;
    float numeros2[n][n];

      llenarmatriz(&numeros[0][0],n);
      llenarigual(&igualA[0],n);
      imprimirmatriz(&numeros[0][0],&igualA[0],n);
      if (n == 2)
      {
          matriz2x2(&numeros[0][0], &igualA[0],n);
      }
      if (n == 3)
      {
          matriz3x3(&numeros[0][0],&igualA[0],n);
      }
      if (n == 4)
      {
          matriz4X4(&numeros[0][0],&igualA[0],n);
      }  
      return 0;
  }

  void llenarmatriz(float *pnumeros,int n)
  {
      for (int i =0;i<n;i++)
      {
          for(int j = 0; j < n;j++)
          {
              gotoxy(j*5,i+3);
              cout<<"digite los numeros de la matriz ["<<i<<"]["<<j<<"]";
              cin>> pnumeros[i*n + j];
              
          }
      }  
  }
  void llenarigual (float *pigualA, int n)
  {
       for(int i=0;i<n;i++)
            {
                cout<<"digite a que estan igualadas las ecuaciones["<<i<<"]";
                cin>>pigualA[i*n];
            }
  }
  void imprimirmatriz(float *pnumeros, float *pigualA, int n)

  {
        for(int i=0; i<n; i++)
            {          
                for(int j=0; j<n;j++)
                {
                    cout<<pnumeros[i*n + j]<<" ";
                    
                }
                cout<<"="<<" "<<pigualA[i*n]<<" ";
                cout<<"\n";
            } 
  }
  void matriz2x2(float *pnumeros, float *pigualA,int n )
  {
     float x,y, determinante ;
     determinante=(pnumeros[0]*pnumeros[1*n+1])-(pnumeros[1]*pnumeros[1*n]);
     cout<< "el determiante es : "<<determinante<<endl;
     x=(pigualA[0]*pnumeros[1*n+1]-pigualA[1*n]*pnumeros[1]);
     y=(pnumeros[0]*pigualA[1*n]-pnumeros[1*n]*pigualA[0]);
     y=y/determinante;
     x=x/determinante;
     cout<<"x ="<<x<<endl;
     cout<<"y ="<<y<<endl;

     
    
  }
  void matriz3x3(float *pnumeros,float *pigualA,int n)
  {

    float x,y,z,determinante;
    determinante=((pnumeros[0]*pnumeros[1*n+1]*pnumeros[2*n+2])+(pnumeros[1]*pnumeros[1*n+2]*pnumeros[2*n])+(pnumeros[2]*pnumeros[1*n]*pnumeros[2*n+1]))-((pnumeros[1]*pnumeros[1*n]*pnumeros[2*n+2])+(pnumeros[0]*pnumeros[1*n+2]*pnumeros[2*n+1])+(pnumeros[2]*pnumeros[1*n+1]*pnumeros[2*n]));
    cout<<"el determinante es = " <<determinante<<endl;
    x=((pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n+2])+(pnumeros[1]*pnumeros[1*n+2]*pigualA[2*n])+(pnumeros[2]*pigualA[1*n]*pnumeros[2*n+1]))-((pnumeros[1]*pigualA[1*n]*pnumeros[2*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n+1])+(pnumeros[2]*pnumeros[1*n+1]*pigualA[2*n]));
    x=x/determinante;
    y=((pnumeros[0]*pigualA[1*n]*pnumeros[2*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n])+(pnumeros[2]*pnumeros[1*n]*pigualA[2*n]))-((pigualA[0]*pnumeros[1*n]*pnumeros[2*n+2])+(pnumeros[0]*pnumeros[1*n+2]*pigualA[2*n])+(pnumeros[2]*pigualA[1*n]*pnumeros[2*n]));
    y=y/determinante;
    z=((pnumeros[0]*pnumeros[1*n+1]*pigualA[2*n])+(pnumeros[1]*pigualA[1*n]*pnumeros[2*n])+(pigualA[0]*pnumeros[1*n]*pnumeros[2*n+1]))-((pnumeros[1]*pnumeros[1*n]*pigualA[2*n])+(pnumeros[0]*pigualA[1*n]*pnumeros[2*n+1])+(pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n]));
    z=z/determinante;
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    cout<<"z ="<<z<<endl; 
    

  }
  void matriz4X4(float *pnumeros,float *pigualA,int n)
 {
     float x,y,z,w,determinante,determinante1,determinante2,determinante3, determinante4, detX, detY, detZ, detW, determinante5, determinante6, determinante7, determinante8, determinante9,determinante10, determinante11, determinante12, determinante13, determinante14, determinante15, determinante16;
     determinante1=(((pnumeros[1*n+1]*pnumeros[2*n+2]*pnumeros[3*n+3])+(pnumeros[1*n+2]*pnumeros[2*n+3]*pnumeros[3*n+1])+(pnumeros[1*n+3]*pnumeros[2*n+1]*pnumeros[3*n+2]))-((pnumeros[1*n+2]*pnumeros[2*n+1]*pnumeros[3*n+3])+(pnumeros[1*n+1]*pnumeros[2*n+3]*pnumeros[3*n+2])+(pnumeros[1*n+3]*pnumeros[2*n+2]*pnumeros[3*n+1])));
     
     determinante2=(((pnumeros[1]*pnumeros[2*n+2]*pnumeros[3*n+3])+(pnumeros[2]*pnumeros[2*n+3]*pnumeros[3*n+1])+(pnumeros[3]*pnumeros[2*n+1]*pnumeros[3*n+2]))-((pnumeros[2]*pnumeros[2*n+1]*pnumeros[3*n+3])+(pnumeros[1]*pnumeros[2*n+3]*pnumeros[3*n+2])+(pnumeros[3]*pnumeros[2*n+2]*pnumeros[3*n+1])));
     determinante2=(determinante2*(-1));
     
     determinante3=(((pnumeros[1]*pnumeros[1*n+2]*pnumeros[3*n+3])+(pnumeros[2]*pnumeros[1*n+3]*pnumeros[3*n+1])+(pnumeros[3]*pnumeros[1*n+1]*pnumeros[3*n+2]))-((pnumeros[2]*pnumeros[1*n+1]*pnumeros[3*n+3])+(pnumeros[1]*pnumeros[1*n+3]*pnumeros[3*n+2])+(pnumeros[3]*pnumeros[1*n+2]*pnumeros[3*n+1])));
     
     determinante4=(((pnumeros[1]*pnumeros[1*n+2]*pnumeros[2*n+3])+(pnumeros[2]*pnumeros[1*n+3]*pnumeros[2*n+1])+(pnumeros[3]*pnumeros[1*n+1]*pnumeros[2*n+2]))-((pnumeros[2]*pnumeros[1*n+1]*pnumeros[2*n+3])+(pnumeros[1]*pnumeros[1*n+3]*pnumeros[2*n+2])+(pnumeros[3]*pnumeros[1*n+2]*pnumeros[2*n+1])));
     determinante4=(determinante4*(-1));
     determinante=((determinante1*pnumeros[0])+(determinante2*pnumeros[1*n])+(determinante3*pnumeros[2*n])+(determinante4*pnumeros[3*n]));
     cout<<"el valor del determinante es"<<endl;
     cout<<determinante<<endl;
     detX=((determinante1*pigualA[0])+(determinante2*pigualA[1*n])+(determinante3*pigualA[2*n])+(determinante4*pigualA[3*n]));
     cout<<"x = "<<detX/determinante<<endl;
     determinante5=(((pigualA[1*n]*pnumeros[2*n+2]*pnumeros[3*n+3])+(pnumeros[1*n+2]*pnumeros[2*n+3]*pigualA[3*n])+(pnumeros[1*n+3]*pigualA[2*n]*pnumeros[3*n+2]))-((pnumeros[1*n+2]*pigualA[2*n]*pnumeros[3*n+3])+(pigualA[1*n]*pnumeros[2*n+3]*pnumeros[3*n+2])+(pnumeros[1*n+3]*pnumeros[2*n+2]*pigualA[3*n])));
     determinante6=(((pigualA[0]*pnumeros[2*n+2]*pnumeros[3*n+3])+(pnumeros[2]*pnumeros[2*n+3]*pigualA[3*n])+(pnumeros[3]*pigualA[2*n]*pnumeros[3*n+2]))-((pnumeros[2]*pigualA[2*n]*pnumeros[3*n+3])+(pigualA[0]*pnumeros[2*n+3]*pnumeros[3*n+2])+(pnumeros[3]*pnumeros[2*n+2]*pigualA[3*n])));
     determinante6=(determinante6*(-1));
     determinante7=(((pigualA[0]*pnumeros[1*n+2]*pnumeros[3*n+3])+(pnumeros[2]*pnumeros[1*n+3]*pigualA[3*n])+(pnumeros[3]*pigualA[1*n]*pnumeros[3*n+2]))-((pnumeros[2]*pigualA[1*n]*pnumeros[3*n+3])+(pigualA[0]*pnumeros[1*n+3]*pnumeros[3*n+2])+(pnumeros[3]*pnumeros[1*n+2]*pigualA[3*n])));
     determinante8=(((pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n+3])+(pnumeros[2]*pnumeros[1*n+3]*pigualA[2*n])+(pnumeros[3]*pigualA[1*n]*pnumeros[2*n+2]))-((pnumeros[2]*pigualA[1*n]*pnumeros[2*n+3])+(pigualA[0]*pnumeros[1*n+3]*pnumeros[2*n+2])+(pnumeros[3]*pnumeros[1*n+2]*pigualA[2*n])));
     determinante8=(determinante8*(-1));
     detY=((determinante5*pnumeros[0])+(determinante6*pnumeros[1*n])+(determinante7*pnumeros[2*n])+(determinante8*pnumeros[3*n]));
     cout<<"y = "<<detY/determinante<<endl;
     determinante9=(((pnumeros[1*n+1]*pigualA[2*n]*pnumeros[3*n+3])+(pigualA[1*n]*pnumeros[2*n+3]*pnumeros[3*n+1])+(pnumeros[1*n+3]*pnumeros[2*n+1]*pigualA[3*n]))-((pigualA[1*n]*pnumeros[2*n+1]*pnumeros[3*n+3])+(pnumeros[1*n+1]*pnumeros[2*n+3]*pigualA[3*n])+(pnumeros[1*n+3]*pigualA[2*n]*pnumeros[3*n+1])));
     determinante10=(((pnumeros[1]*pigualA[2*n]*pnumeros[3*n+3])+(pigualA[0]*pnumeros[2*n+3]*pnumeros[3*n+1])+(pnumeros[3]*pnumeros[2*n+1]*pigualA[3*n]))-((pigualA[0]*pnumeros[2*n+1]*pnumeros[3*n+3])+(pnumeros[1]*pnumeros[2*n+3]*pigualA[3*n])+(pnumeros[3]*pigualA[2*n]*pnumeros[3*n+1])));
     determinante10=(determinante10*(-1));
     determinante11=(((pnumeros[1]*pigualA[1*n]*pnumeros[3*n+3])+(pigualA[0]*pnumeros[1*n+3]*pnumeros[3*n+1])+(pnumeros[3]*pnumeros[1*n+1]*pigualA[3*n]))-((pigualA[0]*pnumeros[1*n+1]*pnumeros[3*n+3])+(pnumeros[1]*pnumeros[1*n+3]*pigualA[3*n])+(pnumeros[3]*pigualA[1*n]*pnumeros[3*n+1])));
     determinante12=(((pnumeros[1]*pigualA[1*n]*pnumeros[2*n+3])+(pigualA[0]*pnumeros[1*n+3]*pnumeros[2*n+1])+(pnumeros[3]*pnumeros[1*n+1]*pigualA[2*n]))-((pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n+3])+(pnumeros[1]*pnumeros[1*n+3]*pigualA[2*n])+(pnumeros[3]*pigualA[1*n]*pnumeros[2*n+1])));
     determinante12=(determinante12*(-1));
     detZ=((determinante9*pnumeros[0])+(determinante10*pnumeros[1*n])+(determinante11*pnumeros[2*n])+(determinante12*pnumeros[3*n]));
     cout<<"z = "<<detZ/determinante<<endl;
     determinante13=(((pnumeros[1*n+1]*pnumeros[2*n+2]*pigualA[3*n])+(pnumeros[1*n+2]*pigualA[2*n]*pnumeros[3*n+1])+(pigualA[1*n]*pnumeros[2*n+1]*pnumeros[3*n+2]))-((pnumeros[1*n+2]*pnumeros[2*n+1]*pigualA[3*n])+(pnumeros[1*n+1]*pigualA[2*n]*pnumeros[3*n+2])+(pigualA[1*n]*pnumeros[2*n+2]*pnumeros[3*n+1])));
     determinante14=(((pnumeros[1]*pnumeros[2*n+2]*pigualA[3*n])+(pnumeros[2]*pigualA[2*n]*pnumeros[3*n+1])+(pigualA[0]*pnumeros[2*n+1]*pnumeros[3*n+2]))-((pnumeros[2]*pnumeros[2*n+1]*pigualA[3*n])+(pnumeros[1]*pigualA[2*n]*pnumeros[3*n+2])+(pigualA[0]*pnumeros[2*n+2]*pnumeros[3*n+1])));
     determinante14=(determinante14*(-1));
     determinante15=(((pnumeros[1]*pnumeros[1*n+2]*pigualA[3*n])+(pnumeros[2]*pigualA[1*n]*pnumeros[3*n+1])+(pigualA[0]*pnumeros[1*n+1]*pnumeros[3*n+2]))-((pnumeros[2]*pnumeros[1*n+1]*pigualA[3*n])+(pnumeros[1]*pigualA[1*n]*pnumeros[3*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[3*n+1])));
     determinante16=(((pnumeros[1]*pnumeros[1*n+2]*pigualA[2*n])+(pnumeros[2]*pigualA[1*n]*pnumeros[2*n+1])+(pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n+2]))-((pnumeros[2]*pnumeros[1*n+1]*pigualA[2*n])+(pnumeros[1]*pigualA[1*n]*pnumeros[2*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n+1])));
     determinante16=(determinante16*(-1));
     detW=((determinante13*pnumeros[0])+(determinante14*pnumeros[1*n])+(determinante15*pnumeros[2*n])+(determinante16*pnumeros[3*n]));
     cout<<"w = "<<detW/determinante<<endl;







 }