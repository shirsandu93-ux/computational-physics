#include<iostream>

using namespace std;
typedef struct 
{
    int dim;
    float x[10];
}
vect;
//calculating dot product
float dot_product(vect A,vect B)
{
    int sum=0,n,i;
    for(i=0;i<A.dim;i++)
    {
        sum+=A.x[i]*B.x[i];
    }
    return sum;
}
//calculating cross product
vect cross_product(vect A,vect B)
{
    vect C;
    C.x[0]=A.x[1]*B.x[2]-A.x[2]*B.x[1];
    C.x[1]=A.x[0]*B.x[2]-A.x[2]*B.x[0];
    C.x[2]=A.x[0]*B.x[1]-A.x[1]*B.x[0];
    return C;
}

int main()
{
    vect A,B,C;
    int i;
    cout<<"Enter the dimension of vector 1 : "<<endl;
    cin>>A.dim;     //dimension of A vector
    cout<<"Enter the dimension of vector 2 : "<<endl;
    cin>>B.dim;     //dimension of B vector
    cout<<"Enter the dimension of vector 3 : "<<endl;
    cin>>C.dim;     //dimension of C vector
    cout<<"Enter the components of vector 1 : "<<endl;
    for(i=0;i<A.dim;i++)
    {
        cin>>A.x[i];    //vector A
    }
    cout<<"Enter the components of vector 2 : "<<endl;
    for(i=0;i<B.dim;i++)
    {
        cin>>B.x[i];    //vector B
    
    }cout<<"Enter the components of vector 3 : "<<endl;
    for(i=0;i<C.dim;i++)
    {
        cin>>C.x[i];    //vector C
    }
    cout<<"Result : "<<dot_product(A,cross_product(B,C))<<endl;
}