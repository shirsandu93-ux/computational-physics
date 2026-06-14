#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    double N,i,nn=0,np=0,x,y,y_max,y_min,a,b,I;
    cout<<"enter N "<<endl;
    cin>>N;
    cout<<"enter maximum and minimum value of y respectively : "<<endl;
    cin>>y_max>>y_min;
    cout<<"enter minimum and maximum value of x respectively :  "<<endl;
    cin>>a>>b;
    for(i=0;i<N;i++)
    {
        x=a+(b-a)*rand()/RAND_MAX;
        y=y_min+(y_max-y_min)*rand()/RAND_MAX;
        if(y<=sin(x)&&y>0) np++;
        if(y>=sin(x)&&y<0) nn++;
    }
    I=((np-nn)/N)*(y_max-y_min)*(b-a);
    cout<<"area is: "<<I<<endl;
    return 0;
} 
