#include<iostream>
#include<string.h>
using namespace std;
void acs(string s[],int len[],int n)
{
    int i,j,t;string tmp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if((len[j]>len[j+1]))
            {
                tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
                t=len[j];
                len[j]=len[j+1];
                len[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<"\n";
    }
}
void sor(string s[],int len[],int n)
{
    int i,j,k;string z;char tmp;
    for(i=0;i<n;i++)
    {
        z=s[i];
        for(j=0;j<len[i];j++)
        {
            for(k=0;k<(len[i]-1);k++)
            {
                if((int)z[k]>(int)z[k+1])
                {
                    tmp=z[k];
                z[k]=z[k+1];
                z[k+1]=tmp;
                }
            }
        }
        s[i]=z;
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<"\n";
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of words to enter\n";
    cin>>n;
    string st[n];
    cout<<"Enter the words in array\n";
    for(i=0;i<n;i++)
        cin>>st[i];
    int len[n];
    for(i=0;i<n;i++)
            len[i]=st[i].length();
            cout<<"The words in ascending order of lengths are:\n";
    acs(st,len,n);
    cout<<"Each word in ascending order of letters are:\n";
    sor(st,len,n);
}
