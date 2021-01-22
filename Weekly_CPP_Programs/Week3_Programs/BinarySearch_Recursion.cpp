#include <iostream>
#include<algorithm>
using namespace std;
void binser(int d[], int ser, int lb, int ub,int p)
{
    if(ub<lb)
    {
        cout<<"Number is not found";
        exit(0);
    }
    if(d[p]==ser)
    {
        cout<<"The number is found at position\n";
        cout<<(p+1);
        cout<<"\nSince it is binary search, i had to sort the array first";
        exit(0);
    }
    if(d[p]>ser)
    {
        ub=p-1;
    }

    if(d[p]<ser)
    {
        lb=p+1;
    }
    p=(lb+ub)/2;
    binser(d,ser,lb,ub,p);
}
int main()
{
    int i,n,lb,ub,p,ser;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter the number to be searched\n";
        cin>>ser;
        sort(a,a+n);
        lb=0;ub=n-1;p=(lb+ub)/2;
        binser(a,ser,lb,ub,p);
}
