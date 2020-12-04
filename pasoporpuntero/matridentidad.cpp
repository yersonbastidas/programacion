# include <iostream>

using namespace std;


void A(float *pidentidad, int n);
void B(float *pidentidad, int n);

int main()
{
    int n =3;
    float identidad[n][n];

   A(&identidad[0][0],n);
   B(&identidad[0][0],n);
}
void A(float *pidentidad, int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                pidentidad[i*n+j]=1;
            }
            else
            {
                pidentidad[i*n+j]=0;
            }
            
        }
    }

}
void B(float *pidentidad, int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<pidentidad[i*n + j]<<" ";
        }cout<<endl;
    }cout<<endl;
}