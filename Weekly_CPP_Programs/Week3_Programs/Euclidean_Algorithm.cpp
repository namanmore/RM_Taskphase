#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    int z=x;
    x=y;
    y=z%y;
    if(y==0)
        return x;

    gcd(x,y);
}
int main()
{
    int a,b,euc,tmp;
    cout<<"Enter 2 numbers\n";
    cin>>a>>b;
    euc=gcd(a,b);
    cout<<"The Greatest Common Divisor using Euclidean Algorithm is\n";
    cout<<euc;
}
