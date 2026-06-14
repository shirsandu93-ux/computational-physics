#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double f(double x,double y)
{
    return (-y);
}
int main()
{
    ofstream out("output");
    float h,k1,k2,k3,k4,k,xf=20,x0=0,y0=1,n=1000;
    h=(xf-x0)/n;
    while(x0<=xf)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        
        k=(k1+2*k2+2*k3+k4)/6;
        y0+=k;
        x0+=h;
        out<<x0<<"  "<<y0<<endl;
        
    }
    cout<<"output printed in file"<<endl;
return 0;
}