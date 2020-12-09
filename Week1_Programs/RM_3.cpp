#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j,k,t=0,z;
    cout<<"Enter the number of rows&columns of matrix respectively\n";
    cin>>r;
    cin>>c;
    int a[r][c];
    int b[r*c];
    cout<<"Enter array elements\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                b[t]=j;t++;
                for(k=0;k<c;k++)
                {
                    a[i][k]=0;
                }
            }
        }
    }
for(i=0;i<t;i++)
{
    z=b[i];
    for(k=0;k<r;k++)
    {
        a[k][z]=0;
    }
}
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j];cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
