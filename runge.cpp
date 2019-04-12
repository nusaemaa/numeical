#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
float f(float x,float y);
int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;

    cout<<"x0 =";
    cin>>x0;
    cout<<endl;
    cout<<"y0 =";
    cin>>y0;
    cout<<endl;
    cout<<"xn =";
    cin>>xn;
    cout<<endl;
    cout<<"h =";
    cin>>h;
    cout<<endl;
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        m1=f(x0,y0);
        m2=f((x0+h/2.0),(y0+m1*h/2.0));
        m3=f((x0+h/2.0),(y0+m2*h/2.0));
        m4=f((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}
float f(float x,float y)
{
    float m;
    m=(x*x)+(y*y);
    return m;
}
