#include<iostream>
using namespace std;
int main()
{
    int n,d,d1,q;
    cin>>n;
    q=n;
    d=q%10;
    q=q/10;
    d1=q%10;
    if(d>=d1)
    {
        cout<<"Not a hill number";
                     exit(0);
    }
    q=n;
    while(q>0)
    {
        d=q%10;
        q=q/10;
        d1=q%10;
        if(d>=d1)
            {
                if(q==0||d==d1)
                {
                     cout<<"Not a hill number";
                     exit(0);
                }
                break;
            }
    }
    while(q>0)
    {
        d=q%10;
        q=q/10;
        d1=q%10;
        if(d<=d1)
            {
                cout<<"Not a hill number";
                exit(0);
            }
    }
    cout<<"It is a Hill number";
    return 0;
}
