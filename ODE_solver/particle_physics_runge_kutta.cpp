#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

double f1(double g1,double g2,double g3,double x)
{
    return((41*g1*g1*g1/6)/(16*M_PI*M_PI));
}
double f2(double g1,double g2,double g3,double x)
{
    return((-19*g2*g2*g2/6)/(16*M_PI*M_PI));
}
double f3(double g1,double g2,double g3,double x)
{
    return((-7*g3*g3*g3/6)/(16*M_PI*M_PI));
}

int main()
{
    ofstream out("output");
    double h,g1,g2,g3,x0,xf,n;
    double k1_g1,k1_g2,k1_g3,k2_g1,k2_g2,k2_g3,k;
    g1=0.35,g2=0.65,g3=1.10;
    x0=0,xf=60,n=1000;
    h=(xf-x0)/n;
    while(x0<=xf)
    {
        k1_g1=f1(g1,g2,g3,x0);
        k1_g2=f2(g1,g2,g3,x0);
        k1_g3=f3(g1,g2,g3,x0);

        k2_g1=f1(g1+h*k1_g1,g2+h*k1_g2,g3+h*k1_g3,x0+h);
        k2_g2=f2(g1+h*k1_g1,g2+h*k1_g2,g3+h*k1_g3,x0+h);
        k2_g3=f3(g1+h*k1_g1,g2+h*k1_g2,g3+h*k1_g3,x0+h);

        g1+=h*(k1_g1+k2_g1)/2.0;
        g2+=h*(k1_g2+k2_g2)/2.0;
        g3+=h*(k1_g3+k2_g3)/2.0;
        x0+=h;
        
        out<<x0<<"      "<<g1<<"      "<<g2<<"    "<<g3<<endl;
    }
}