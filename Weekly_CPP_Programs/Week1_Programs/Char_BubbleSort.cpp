#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100],tmp;int l,i,j;
    cout<<"Enter the word\n";
    cin>>str;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<(l-1);j++)
        {
            if((int)str[j]>(int)str[j+1])
            {
                tmp=str[j];
                str[j]=str[j+1];
                str[j+1]=tmp;
            }
        }
    }
    cout<<str;
    return 0;
}
