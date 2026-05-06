#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

double fy(double x,double y,double z)
{
    return (z);
}

double fz(double x,double y,double z)
{
    return(-y-z/2-cos(0.9*x));
}

int main()
{
    ofstream out("output.plt");
    double x0,y0,z0,xf,h,n;
    double k1,k2,k3,k4,l1,l2,l3,l4;
    x0=0,xf=70,y0=1,z0=0,n=1000;
    h=(xf-x0)/n;
    while(x0<=xf)
    {
        k1=h*fy(x0,y0,z0);
        l1=h*fz(x0,y0,z0);

        k2=h*fy(x0+h/2,y0+k1/2,z0+l1/2);
        l2=h*fz(x0+h/2,y0+k1/2,z0+l1/2);

        k3=h*fy(x0+h/2,y0+k2/2,z0+l2/2);
        l3=h*fz(x0+h/2,y0+k2/2,z0+l2/2);

        k4=h*fy(x0+h,y0+k3,z0+l3);
        l4=h*fz(x0+h,y0+k3,z0+l3);

        y0+=(k1+2*k2+2*k3+k4)/6;
        z0+=(l1+2*l2+2*l3+l4)/6;

        out<<x0<<"      "<<y0<<"        "<<z0<<endl;
        x0+=h;
    }
}
