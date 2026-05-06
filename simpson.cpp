/*simpson's 1/3rd method
calculating area under a exponential curve*/
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double f(double x)
{
    return x*x*x*exp(-x);
}

//calculating integration 
double simpson(double a,double b,double n)
{
    double i,h,sum,integration;
    h=(b-a)/(n);
    sum=f(a)+f(b);
    for(i=1;i<n;i+=2)
    {
        sum+=4*f(a+i*h);
    }
    for(i=2;i<n;i+=2)
    {
        sum+=2*f(a+i*h);
    }
    integration=h*sum/3.0;
    return (integration);
}

//calculating convergence
double convergence(double a,double b)
{
    double n,err,acc,i_old,i_new;
    n=10;
    err=10;     //difference between old and new area
    acc=1e-4;   //convergence limit
    i_old=10;
    while(err>acc)
    {
        i_new=simpson(a,b,n);
        err=abs(i_old-i_new);
        i_old=i_new;
        n+=10;
    }
    return (i_new);
}

int main()
{
    ofstream out("output");
    double n,a,b,c,err,acc,iold,simp,conv,bconv;
    c=10;
    err=10;
    acc=1e-4;
    iold=10;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"enter n: "<<endl;
    cin>>n;
    simp=simpson(a,b,n);
    conv=convergence(a,b);

    //checking convergence in end
    while(err>acc)
    {
        bconv=convergence(a,c);
        c+=0.01;
        err=abs(iold-bconv);
        iold=bconv;
        out<<err<<" "<<bconv<<endl;
    }
    cout<<"answer before convergence: "<<simp<<endl;
    cout<<"answer after convergence: "<<conv<<endl;
    cout<<"answer after end convergence: "<<bconv<<endl;
    cout<<c;
}