#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    ifstream in("interpol.in");
    ofstream out("output.plt");
    double sum,product;
    int n,j,i;
    double X,Y;
    double x[20];//={15,55.7,78.4,90};
    double y[20];//={10,45.5,89,45.3};
    i=0;
    while(in>>x[i]>>y[i])
    {
        cout<<x[i]<<"   "<<y[i]<<endl;
        i++;
    }
    n=i;
    for(X=0;X<n;X+=0.2)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            product=1;
            for(j=0;j<n;j++)
            {
                if(j!=i)
                {
                    product*=((X-x[j])/(x[i]-x[j]));
                }
            }
            sum+=y[i]*product;
        }
        out<<X<<"   "<<sum<<endl;
    }
    //cout<<"sum is: "<<sum<<endl;
}