#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    float r;
    cout<<"Enter end limit of sequence: "<<endl;
    cin>>n;
    double x[n];
    x[0]=1;
    x[1]=1;
    for(i=0;i<=n;i++)
    {
        if(i==0||i==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        x[i]=x[i-1]+x[i-2];
        cout<<x[i]<<endl;
        }
    for(i=1;i<=n;i++)
    {
        r=1.0*x[i]/x[i-1];
        cout<<"The ratio is: "<<r<<endl;        
    }
}