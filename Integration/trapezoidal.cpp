//obtaining area under a f(x)=sin(x) using trapezoidal method
#include<iostream>
#include<cmath>
using namespace std;

//defining function
double f(double x)
{
    return sin(x);
}

//calculating area
double trapezoid(double a,double b,double n)
{
    double i,sum,h;
    sum=f(a)+f(b);       //adding 1st and nth division
    h=(b-a)/n;
    for(i=1;i<n;i++)
    {
        sum+=2*f(a+h*i);
    }
    return (h*sum/2);
}

int main()
{
    double a,b,n,area;
    cout<<"enter n: "<<endl;
    cin>>n;         //number of divisions
    cout<<"enter a  and b : "<<endl;
    cin>>a>>b;      //lower and upper limit
    area=trapezoid(a,b,n);
    cout<<"answer : "<<area<<endl;
}