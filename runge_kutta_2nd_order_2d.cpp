#include<iostream>
#include<fstream>
using namespace std;

float fy(float x,float y,float z)
{
    return (z);
}

float fz(float x,float y,float z)
{
    return(-y-z/2);
}

int main()
{
    ofstream out("output");
    double h,y0,z0,x0,xf,n;
    double k1_y,k1_z,k2_y,k2_z,k;
    x0=0.0,y0=1.0,z0=0.0;
    xf=60,n=1000;
    h=(xf-x0)/n;
    while(x0<=xf)
    {
        k1_y=fy(x0,y0,z0);
        k1_z=fz(x0,y0,z0);

        k2_y=fy(x0+h,y0+h*k1_y,z0+h*k1_z);
        k2_z=fz(x0+h,y0+h*k1_y,z0+h*k1_z);

        y0+=h*(k1_y+k2_y)/2.0;
        z0+=h*(k1_z+k2_z)/2.0;

        out<<x0<<"      "<<y0<<"      "<<z0<<endl;
        x0+=h;
        }
}