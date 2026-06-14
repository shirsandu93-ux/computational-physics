#include<iostream>
#include<fstream>
using namespace std;

float fx(float x,float y,float z)
{
    return (y);
}

float fy(float x,float y,float z)
{
    return(-x);
}

int main()
{
    ofstream out("output");
    float h,x0,y0,z0,zf,n;
    x0=1;
    y0=0;
    z0=0;
    zf=20;
    n=1000;
    h=(zf-z0)/n;
    while(z0<=zf)
    {
        x0+=h*fx(x0,y0,z0);
        y0+=h*fy(x0,y0,z0);
        z0+=h;
        out<<x0<<"  "<<y0<<"    "<<z0<<endl;
    }
return 0;
}