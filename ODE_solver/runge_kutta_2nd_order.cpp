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
    float h,k1,k2,k,xf=20,x0=0,y0=1,n=1000;
    h=(xf-x0)/n;
    while(x0<=xf)
    {
        k1=f(x0,y0);
        k2=f(x0+h,y0+h*k1);
        k=(k1+k2)/2;
        y0+=h*k;
        out<<x0<<"  "<<y0<<endl;
        x0+=h;
        
    }
    cout<<"output printed in file"<<endl;
return 0;
}