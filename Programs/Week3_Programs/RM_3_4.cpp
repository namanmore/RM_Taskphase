#include<iostream>
using namespace std;
int sum(int N,int x)
{
    if((N%10)==0)
        return x;
    x=x+(N%10);
    sum(N/10,x);
}
int main()
{
    int s=0,N,d,x=0;
    cout<<"Enter the number\n";
    cin>>N;
    s=sum(N,x);
    cout<<"Sum of digits with recursion\n";
    cout<<s<<"\n";s=0;
    while(N>0)
    {
        d=N%10;
        s=s+d;
        N=N/10;
    }
    cout<<"Sum of digits without recursion\n";
    cout<<s;
}
