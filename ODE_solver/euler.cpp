#include<iostream>
#include<fstream>
using namespace std;

float f(float t,float y)
{
    return (-y);
}
int main()
{
    ofstream out("output");
    float h,tf=20,t0=0,y0=5,n=1000;
    h=(tf-t0)/n;
    while(t0<=tf)
    {
        y0+=h*f(t0,y0);
        t0+=h;
        out<<t0<<"  "<<y0<<endl;
    }
return 0;
}