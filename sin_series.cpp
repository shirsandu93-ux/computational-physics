#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float term,sum,x,y,n=1;
    cout<<"Enter x : "<<endl;
    cin>>y;
    x=M_PI*y/180;
    term=x;
    sum=x;
    while(abs(term)>0.000001)
    {
        term=-1.0*term*x*x/((2*n)*(2*n+1));
        sum+=term;
        n++;
    }
    cout<<"sin "<<y<<" : "<<sum<<endl;
    // cout<<n;
}