#include<iostream>
using namespace std;
void mult(int A[][10], int B[][10], int r1,int r2, int c1, int c2)
{
    int i,j,k;
    if(c1!=r2)
    {
        cout<<"Matrix not compatible to multiply";
        exit(0);
    }
      int C[r1][c2];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
               {
                   C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
               }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }

}
void trans(int A[][10], int r1, int c1,int x)
{
    int i,j,k;
      int C[c1][r1];
      for(i=0;i<c1;i++)
      {
          for(j=0;j<r1;j++)
          {
              C[i][j]=A[j][i];
          }
      }

    cout<<"Transpose of matrix"<<x<<" is\n";
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }

}
void ver(int A[][10], int B[][10], int r1,int r2, int c1, int c2)
{
    int i,j,k;
    if(c1!=r2)
    {
        cout<<"Matrix not compatible to multiply";
        exit(0);
    }
      int C[r1][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
               {
                   C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
               }
        }
    }
    int C1[c2][r1];
    for(i=0;i<c2;i++)
      {
          for(j=0;j<r1;j++)
          {
              C1[i][j]=C[j][i];
          }
      }
      int B1[c2][r2];int A1[c1][r1];
      for(i=0;i<c2;i++)
      {
          for(j=0;j<r2;j++)
          {
              B1[i][j]=B[j][i];
          }
      }
      for(i=0;i<c1;i++)
      {
          for(j=0;j<r1;j++)
          {
              A1[i][j]=A[j][i];
          }
      }
      int C2[c2][r1];
      for(i=0;i<c2;i++)
    {
        for(j=0;j<r1;j++)
        {
            C2[i][j]=0;
            for(k=0;k<c1;k++)
               {
                   C2[i][j]=C2[i][j]+(B1[i][k]*A1[k][j]);
               }
        }
    }
    int z=0;
      for(i=0;i<c2;i++)
      {
          for(j=0;j<r1;j++)
          {
              if(C1[i][j]!=C2[i][j])
              {
                  z++;break;
              }
          }
      }
      if(z>0)
      {
          cout<<"The identity is not true in this case";
      }
      else
        cout<<"The identity is true";


}
int main()
{
    int i,j,r1,c1,r2,c2;
    cout<<"Enter the number of rows&columns respectively of first matrix\n";
    cin>>r1;
    cin>>c1;
    int a[r1][10];
    cout<<"Enter first array elements\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    cout<<"Enter the number of rows&columns respectively of second matrix\n";
    cin>>r2;
    cin>>c2;
    int b[r2][10];
    cout<<"Enter second array elements\n";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\n";
    int d=1;
    cout<<"Multiplication is\n";
    mult(a, b,r1,r2,c1,c2);cout<<"\n";
    trans(a,r1,c1,d);cout<<"\n";
    d++;
    trans(b,r2,c2,d);cout<<"\n";
    ver(a,b,r1,r2,c1,c2);
}
