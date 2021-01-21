#include <bits/stdc++.h>
using namespace std;
float speed(double V,double theta,double Omeg,double b[])
{
    double v1,Vx,Vy,pi = 2*acos(0.0);/*Not approximating 'pi' and hence storing actual value of pi by acos function*/
    int i=0;
    Vx=V*sin((pi/180)*theta);
    Vy=V*cos((pi/180)*theta);
    cout<<fixed;
    for(i=0;i<4;i++)
       {
           v1=Vx*sin(pi*b[i])+Vy*cos(pi*b[i]);
           cout<<"Velocity of wheel "<<i+1<<" is "<<v1+Omeg<<"\n";
       }
}
int main()
{
         double sp,ang,w;double a[4];double j=1;int i;
         for(i=0;i<4;i++)
         {
             a[i]=j/4;
             j=j+2;
         }
         cout<<"Enter the speed with which the bot needs to move\n";
         cin>>sp;
         cout<<"Enter the angle which the bot will follow in motion\n";
         cin>>ang;
         cout<<"Enter the angular velocity\n";
         cin>>w;
         speed(sp,ang,w,a);
         return 0;
}

