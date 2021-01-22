#include <iostream>
using namespace std;

int len(char *pt)
{
    int i=0;
    while(*pt!= '\0')
    {
        i++;pt++;
    }
    return i;
}

int main()
{
    char s[100];int i;
    cout<<"Enter a string\n";
    cin>>s;
    i=len (s);
    cout<<i;
}
