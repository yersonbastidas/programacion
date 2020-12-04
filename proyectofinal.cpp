[3:53 p. m., 20/11/2020] Maicol Mate 2: #include <iostream>
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
      if ( n==2)
      {
    …
[3:57 p. m., 20/11/2020] Maicol Mate 2: #include <iostream>
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

     
        //i*n + j   
      /* if ( n==2)
        {
          determinante= (numeros[0][0]*numeros[1][1])-(numeros[0][1]*numeros[1][0]);
          cout<<"el determinante es :"<<endl;
          cout<<determinante<<endl;
          x=(igualA[0]*numeros[1][1]-igualA[1]*numeros[0][1]);
          y=(numeros[0][0]*igualA[1]-numeros[1][0]*igualA[0]);
          y=y/determinante;
          x=x/determinante;
          cout<<"x = "<<x<<endl;
          cout<<"y ="<<y<<endl;

        }*/
  }
  void matriz3x3(float *pnumeros,float *pigualA,int n);
  {
    
    float x,y,z,determinante;
    determinante=((pnumeros[0]*pnumeros[1*n+1]*pnumeros[2*n+2])+(pnumeros[1]*pnumeros[1*n+2]*pnumeros[2*n])+(pnumeros[2]*pnumeros[1*n]*pnumeros[2*n+1]))-((pnumeros[1]*pnumeros[1*n]*pnumeros[2*n+2])+(pnumeros[0]*pnumeros[1*n+2]*pnumeros[2*n+1])+(pnumeros[2]*pnumeros[1*n+1]*pnumeros[2*n]));
    x=((pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n+2])+(pnumeros[1]*pnumeros[1*n+2]*pigualA[2])+(pnumeros[2]*pigualA[1]*pnumeros[2*n+1]))-((pnumeros[1]*pigualA[1]*pnumeros[2*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n+1])+(pnumeros[2]*pnumeros[1*n+1]*pigualA[2]));
    x=x/determinante;
    y=((pnumeros[0]*pigualA[1]*pnumeros[2*n+2])+(pigualA[0]*pnumeros[1*n+2]*pnumeros[2*n])+(pnumeros[2]*pnumeros[1*n]*pigualA[2]))-((pigualA[0]*pnumeros[1*n]*pnumeros[2*n+2])+(pnumeros[0]*pnumeros[1*n+2]*pigualA[2])+(pnumeros[2]*pigualA[1]*pnumeros[2*n]));
    y=y/determinante;
    z=((pnumeros[0]*pnumeros[1*n+1]*pigualA[2])+(pnumeros[1]*pigualA[1]*pnumeros[2*n])+(pigualA[0]*pnumeros[1*n]*pnumeros[2*n+1]))-((pnumeros[1]*pnumeros[1*n]*pigualA[2])+(pnumeros[0]*pigualA[1]*pnumeros[2*n+1])+(pigualA[0]*pnumeros[1*n+1]*pnumeros[2*n]));
    z=z/determinante;
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    cout<<"z ="<<z<<endl;       



     /*if( nf==3 && nc==3)  
        {
         
         determinante=((numeros[0][0]*numeros[1][1]*numeros[2][2])+(numeros[0][1]*numeros[1][2]*numeros[2][0])+(numeros[0][2]*numeros[1][0]*numeros[2][1]))-((numeros[0][1]*numeros[1][0]*numeros[2][2])+(numeros[0][0]*numeros[1][2]*numeros[2][1])+(numeros[0][2]*numeros[1][1]*numeros[2][0]));
         cout<<" el determinante es  = "<<determinante<<endl;
         x=( (igualA[0]*numeros[1][1]*numeros[2][2]) + (numeros[0][1]*numeros[1][2]*igualA[2]) + (numeros[0][2]*igualA[1]*numeros[2][1]) ) - ( (numeros[0][1]*igualA[1]*numeros[2][2]) + (igualA[0]*numeros[1][2]*numeros[2][1]) + (numeros[0][2]*numeros[1][1]*igualA[2]));
         x=x/determinante;
         cout<<" x = "<<x<<endl;
         y=((numeros[0][0]*igualA[1]*numeros[2][2])+(igualA[0]*numeros[1][2]*numeros[2][0])+(numeros[0][2]*numeros[1][0]*igualA[2])) - ((igualA[0]*numeros[1][0]*numeros[2][2])+(numeros[0][0]*numeros[1][2]*igualA[2])+(numeros[0][2]*igualA[1]*numeros[2][0]));
         y=y/determinante;
         cout<<" y = "<<y<<endl;
         z=((numeros[0][0]*numeros[1][1]*igualA[2])+(numeros[0][1]*igualA[1]*numeros[2][0])+(igualA[0]*numeros[1][0]*numeros[2][1])) - ((numeros[0][1]*numeros[1][0]*igualA[2])+(numeros[0][0]*igualA[1]*numeros[2][1])+(igualA[0]*numeros[1][1]*numeros[2][0]));   
         z=z/determinante;
         cout<<" z = "<<z<<endl;
         }*/
  }