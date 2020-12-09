#include<iostream>
using namespace std;
int main()
{
    int a,b,s1=0,s2=0,i=1;
    cout<<"Enter 2 numbers\n";
    cin>>a;
    cin>>b;
    while(i<=(a/2))
    {
        if((a%i)==0)
            s1=s1+i;
        i++;
    }
    i=1;
    while(i<=(b/2))
    {
        if((b%i)==0)
            s2=s2+i;
        i++;
    }
    if(s1==b && s2==a)
        cout<<"Yes, they are Amicable numbers";
    else
        cout<<"No, they are not Amicable numbers";
    return 0;
}
