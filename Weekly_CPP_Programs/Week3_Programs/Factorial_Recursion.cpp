#include <iostream>
using namespace std;
int fact(int x)
{
    if(x==1)
        return x;
    x=x*fact((x-1));
}
int main()
{
    int n,f,z=1;
    cout<<"Enter the number\n";
    cin>>n;
    f=fact(n);
    cout<<"Factorial is\n"<<f;
}
