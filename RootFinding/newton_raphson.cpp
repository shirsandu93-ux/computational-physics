/*NEWTON RAPHSON METHOD
root finding of a function*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

float f(float x)
{
    return (x*x-4.0*x+3.0);
}
float df(float x)
{
    return (2.0*x-4.0);
}
float newton_raphson(float x0)
{
    float x=x0;
    while(abs(f(x))>1e-4)
    {
        x-=f(x)/df(x);
    }
    return x;
}
int main()
{
    ofstream out("output");
    float x0,a,b,i;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;
    for(i=0;i<(abs(a)+abs(b));i++)
    {
        x0=int(a+(b-a)*rand()/RAND_MAX);
        if(df(x0)==0) 
        {
            out<<"slope parallel to x axis  "<<x0<<endl;
        }
        else
        {
            out<<x0<<"      "<<newton_raphson(x0)<<endl;
            cout<<x0<<"     "<<newton_raphson(x0)<<endl;
        }
    }
    return 0;
}