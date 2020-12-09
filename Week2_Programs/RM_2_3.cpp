#include <iostream>
using namespace std;
void cpy(char *pt, char *ptr)
{
    char i=0;
    while(*pt!= '\0')
    {
        *ptr=*pt;pt++;ptr++;i++;
    }
     while(i>0)
    {
        i--;ptr--;
    }
        cout<<ptr;
}

int main()
{
    char s[100],d[100];
    cout<<"Enter a string\n";
    cin>>s;
    cpy(s,d);
}
