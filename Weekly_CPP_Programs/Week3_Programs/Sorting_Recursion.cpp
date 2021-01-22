#include <iostream>
using namespace std;
void srt(int d[],int n,int i)
{
    int mn=i;
    int j,tmp;
    for(j=i+1;j<n;j++)
    {
        if(d[j]<d[mn])
            mn=j;
    }
    tmp=d[i];
    d[i]=d[mn];
    d[mn]=tmp;
    i++;
    if(i==n)
    {
        cout<<"The sorted array in ascending order is\n";
        int k;
        for(k=0;k<n;k++)
            cout<<d[k]<<"\t";
            exit(0);
    }
    srt(d,n,i);
}
int main()
{
    int n,i;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        i=0;
        srt(a,n,i);

}
