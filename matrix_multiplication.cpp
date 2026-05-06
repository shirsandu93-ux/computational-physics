#include<iostream>
#include<fstream>
using namespace std;

typedef struct
{
    int r,c;
    int x[5][5];
}
matrix;

matrix multiplication(matrix a,matrix b)
{
    int i,j,k;
    matrix C;
    C.r=a.r;
    C.c=b.c;
    for(i=0;i<a.r;i++)
    {
        for(j=0;j<b.c;j++)
        {
            C.x[i][j]=0;
            for(k=0;k<a.c;k++)
            {
                C.x[i][j]+=a.x[i][k]*b.x[k][j];
            }
        }
    }
    return C;
}

int main()
{
    ifstream in("matrix_input");
    int i,j;
    matrix u,v,w;
    in>>u.r>>u.c;
    for(i=0;i<u.r;i++)
    {
        for(j=0;j<u.c;j++)
        {
            in>>u.x[i][j];
        }
    }
    // for(i=0;i<u.r;i++)
    // {
    //     for(j=0;j<u.c;j++)
    //     {
    //         cout<<u.x[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    in>>v.r>>v.c;
    for(i=0;i<v.r;i++)
    {
        for(j=0;j<v.c;j++)
        {
            in>>v.x[i][j];
        }
    }
    w=multiplication(u,v);
    cout<<"matrix is : "<<w.r<<"x"<<w.c<<endl;
    cout<<"resultant matrix: "<<endl;
    for(i=0;i<w.r;i++)
    {
        for(j=0;j<w.c;j++)
        {
            cout<<w.x[i][j]<<" ";
        }
        cout<<endl;
    }
}