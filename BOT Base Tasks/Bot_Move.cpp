#include <bits/stdc++.h>
using namespace std;
float speed(double V,double theta,double Omeg)
{
    double v1,v2,v3,v4,Vx,Vy,pi = 2*acos(0.0);/*Not approximating 'pi' and hence storing actual value of pi by acos function*/

    Vx=V*sin((pi/180)*theta);
    Vy=V*cos((pi/180)*theta);
    cout<<fixed;
       v1=Vx*sin(pi/4)+Vy*cos(pi/4);
       v2=Vx*sin((pi) * 3/4)+Vy*cos((pi) * 3/4);
       v3=Vx*sin((pi) * 5/4)+Vy*cos((pi) * 5/4);
       v4=Vx*sin((pi) * 7/4)+Vy*cos((pi) * 7/4);
       /*The formula didnt work for multiples of 90(Straight path motion, hence this condition*/
    if(theta==90 || theta==180 || theta==270 || theta==0)
    {
        v1=v1*2;
        v2=v2*2;
        v3=v3*2;
        v4=v4*2;
    }

           //Adding the angular velocity and then printing
       cout<<"Velocity of wheel 1 is "<<v1+Omeg<<"\n";
       cout<<"Velocity of wheel 2 is "<<v2+Omeg<<"\n";
       cout<<"Velocity of wheel 3 is "<<v3+Omeg<<"\n";
       cout<<"Velocity of wheel 4 is "<<v4+Omeg<<"\n";
}
int main()
{
         double sp,ang,w;
         cout<<"Enter the speed with which the bot needs to move\n";
         cin>>sp;
         cout<<"Enter the angle which the bot will follow in motion\n";
         cin>>ang;
         cout<<"Enter the angular velocity\n";
         cin>>w;
         speed(sp,ang,w);
}

