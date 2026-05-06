#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
// function y=ax^b
// log y = b log(x)+log a
// y=log y
// x=log x
// c=log a
// m=b
int main()
{
    ifstream in("login.dat");
    ofstream out("logout.dat");
    int i,n;
    double m,c,sumx,sumy,sumxy,sumx2,a,b,x[10],y[10];
    sumx=0;
    sumy=0;
    sumxy=0;
    sumx2=0;
    cout<<"enter n "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        in>>x[i]>>y[i];
        cout<<x[i]<<" "<<y[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        sumx+=log(x[i]);
        sumy+=log(y[i]);
        sumxy+=log(x[i])*log(y[i]);
        sumx2+=log(x[i])*log(x[i]);
    }
    m=(sumx*sumy-n*sumxy)/(sumx*sumx-n*sumx2);
    c=(sumy-m*sumx)/float(n);
    b=m;
    a=exp(c);
    cout<<"b= "<<b<<"; a= "<<a<<endl;
    for(i=0;i<n;i++)
    {
        out<<x[i]<<" "<<a*pow(x[i],b)<<endl;
    }
    return 0;
}