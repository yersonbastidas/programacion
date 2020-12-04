#include <iostream>
using namespace std;

void  A( int *par,int n);
int main ()
{
 int n=100;
 int ar[n];
 A(&ar[0],n);

}
void  A( int *par,int n)
{
    for(int i=0;i<99;i=i+2)
    {
        par[i*n]=i+2;
        cout<<par[i*n]<<",";
        
    }
    
}