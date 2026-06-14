#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    ifstream in("gauss.in");
    double X[10],x[10],a[10][10],b[10];
    double err=10;
    int i,j,n=3;
    cout<<"enter 3 guess value: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>X[i];      //taking 3 guess value
    }
    cout<<"given matrix: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            in>>a[i][j];        //taking input matrix
            cout<<a[i][j]<<" ";
        }
        in>>b[i];
        cout<<"  "<<b[i]<<endl;
    }
    while(err>1e-4)
    {
        x[0]=(b[0]-a[0][1]*X[1]-a[0][2]*X[2])/a[0][0];      //Gauss-seidal formula
        x[1]=(b[1]-a[1][0]*x[0]-a[1][2]*X[2])/a[1][1];
        x[2]=(b[2]-a[2][0]*x[0]-a[2][1]*x[1])/a[2][2];
        err=(fabs(x[0]-X[0])+fabs(x[1]-X[1])+fabs(x[2]-X[2]));
        X[0]=x[0];
        X[1]=x[1];
        X[2]=x[2];
        //cout<<err<<endl;
        //cout<<x[0]<<"   "<<x[1]<<"  "<<x[2]<<endl;
    }
    cout<<"solution: "<<x[0]<<"   "<<x[1]<<"  "<<x[2]<<endl;
}