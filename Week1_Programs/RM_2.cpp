#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,i,j,k;
    cout<<"Enter the number of rows&columns of first matrix respectively\n";
    cin>>r1;
    cin>>c1;
    int a[r1][c1];
    cout<<"Enter the number of rows&columns of second matrix respectively\n";
    cin>>r2;
    cin>>c2;
    int b[r2][c2];
    if(c1!=r2)
    {
        cout<<"Not Compatible for multiplication";
        exit(0);
    }
    cout<<"Enter first matrix elements\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix elements\n";
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[r1][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
