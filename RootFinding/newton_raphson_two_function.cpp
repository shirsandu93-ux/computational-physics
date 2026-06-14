#include<iostream>
#include<cmath>
using namespace std;

double f(double x,double y){return(x*x+y*y-5);}
double g(double x,double y){return(x*y-2);}

double dxf(double x,double y) {return 2*x;}
double dyf(double x,double y) {return 2*y;}
double dxg(double x,double y) {return y;}
double dyg(double x,double y) {return x;}

int main()
{
    double x,y,x0,y0;
    double det,a,b,c,d;
    x0=-1,y0=-0.5;
    x=x0,y=y0;
    while(abs(f(x,y))+abs(g(x,y))>1e-5)
    {
        a=dxf(x,y);
        b=dyf(x,y);
        c=dxg(x,y);
        d=dyg(x,y);
        det=a*d-b*c;
        x+=(g(x,y)*dyf(x,y)-f(x,y)*dyg(x,y))/det;
        y+=(f(x,y)*dxg(x,y)-g(x,y)*dxf(x,y))/det;
        cout<<x<<"  "<<y<<endl;
    }
}