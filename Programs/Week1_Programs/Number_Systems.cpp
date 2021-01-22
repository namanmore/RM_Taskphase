#include <iostream>
using namespace std;
int main()
{
    int n,b,d,i;string bin="";
    cout<<"Enter the number in decimal number system\n";
    cin>>n;
    b=n;
    cout<<"Binary equivalent is\n";
    while(b>0)
    {
        d=b%2;
        b=b/2;
        bin=bin+to_string(d);
    }
    for(i=(bin.length()-1);i>=0;i--)
    {
        cout<<bin[i];
    }
    cout<<"\n";
    bin="";b=n;
    cout<<"Octal equivalent is\n";
    while(b>0)
    {
        d=b%8;
        b=b/8;
        bin=bin+to_string(d);
    }
    for(i=(bin.length()-1);i>=0;i--)
    {
        cout<<bin[i];
    }
    cout<<"\n";
    bin="";b=n;
    cout<<"Hexadecimal equivalent is\n";
    while(b>0)
    {
        d=b%16;
        b=b/16;
        if(d<10)
        bin=bin+to_string(d);
        else
        {
            d=d+55;
            bin=bin+(char)d;
        }
    }
    for(i=(bin.length()-1);i>=0;i--)
    {
        cout<<bin[i];
    }
    return 0;
}
