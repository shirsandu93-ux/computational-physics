#include<iostream>
#include<fstream>
using namespace std;

float fx(float x,float y,float z){return (y);}
float fy(float x,float y,float z){return(-x);}

typedef struct
{
    double s1,s2;
}
twovar;

twovar euler(double x,double y,double z,double t)
{
    twovar sol;
    double h=0.001,n=1000,zv;
    for(zv=z;zv<=t;zv+=h)
    {
        x+=h*fx(x,y,z);
        y+=h*fy(x,y,z);
    }
    sol.s1=x;
    sol.s2=y;
    return sol;
}

int main()
{
    ofstream out("output");
    double x0,y0,z0,zf,t;
    x0=1;
    y0=0;
    z0=0;
    zf=20;
    for(t=0;t<zf;t+=0.1)
    {
        out<<t<<"   "<<euler(x0,y0,z0,t).s1<<"  "<<euler(x0,y0,z0,t).s2<<endl;
    }
return 0;
}