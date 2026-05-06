/*Monte carlo integration
finding estimated area under a curve of f(x)=x^2 using monte carlo simulation within given limits.
*/  
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
    double total_points,i,count=0;  //tptal points should be larger(near 10^7) to get more accurate answer
    double x,y,y_max,y_min,x_min,x_max,area;
    srand(time(NULL));

    cout<<"Enter total points : ";
    cin>>total_points;

    //taking input of upper and lower limit in y axis
    cout<<"Enter minimum and maximum value of y respectively : "<<endl;
    cin>>y_min>>y_max; 

    //taking input of upper and lower limit in x axis
    cout<<"Enter minimum and maximum value of x respectively :  "<<endl;
    cin>>x_min>>x_max;     
    for(i=0;i<total_points;i++)
    {
        x=x_min+(x_max-x_min)*rand()/RAND_MAX;
        y=y_min+(y_max-y_min)*rand()/RAND_MAX;
        if(y <= x * x )
        {
            count++;
        } 
    }
    //calculating integration
    area=((count)/total_points)*(y_max-y_min)*(x_max-x_min);        
    cout<<"Estimated area : "<<area<<endl;
    return 0;
} 