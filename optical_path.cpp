#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    double u1,u2,x,xm,x1,x2,y1,y2,opm,op,sint,sinr;
    cout<<"enter u1 and u2 : "<<endl;
    cin>>u1>>u2;        //refractive index of 1st and 2nd medium       

    cout<<"enter x1 and y1 : "<<endl;
    cin>>x1>>y1;        //starting point

    cout<<"enter x2 and y2 : "<<endl;
    cin>>x2>>y2;        //end point

    opm=u1*sqrt(pow(y1,2)+pow((x2-x1),2))+u2*sqrt(pow(y2,2)+pow((x2-x1),2));
    for(x=x1;x<=x2;x+=0.0001)
    {
        op=u1*sqrt(pow(y1,2)+pow((x-x1),2))+u2*sqrt(pow(y2,2)+pow((x2-x),2));
        if(op<opm)
        {
            opm=op;
            xm=x;
        }
    }
    cout<<"Least path : "<<op<<endl;

    sint=(xm-x1)/sqrt(pow((xm-x1),2)+pow(y1,2));
    sinr=(x2-xm)/sqrt(pow((x2-xm),2)+pow(y2,2));

    cout<<"u1*sin_i: "<<u1*sint<<endl;
    cout<<"u2*sin_r: "<<u2*sinr<<endl;
    cout<<"ratio: "<<u1*sint/u2*sinr<<endl;     //verification of snell's law

    if(abs((u1*sint)-(u2*sinr))<0.00001) cout<<"Snell law verified"<<endl;
    else cout<<"Snell law not satisfied"<<endl;
}