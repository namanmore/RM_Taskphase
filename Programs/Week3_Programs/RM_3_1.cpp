#include <iostream>
using namespace std;
void fib(int c[],int i)
{
    c[i]=c[i-1]+c[i-2];
    cout<<c[i];
    i++;
    if(i==40)
        exit(0);
        cout<<"\n";
    fib(c,i);
}
int main()
{
    int a[40];
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<"\n"<<a[1]<<"\n";
    fib(a,2);
}
