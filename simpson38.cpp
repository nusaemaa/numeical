//Simpson 3/8th Rule
#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    double a=1/x;
    return a;
}
int main()
{    cout.precision(4);
    cout.setf(ios::fixed);
    int n,i;
    double a,b,c,h,sum=0,integral;
    cout<<"\nEnter the limits of integration,\n\nInitial limit,a= ";
    cin>>a;
    cout<<"\nFinal limit, b=";
    cin>>b;
    cout<<"\nEnter the no of intervals(multiple of 3 ) n = ";
    cin>>n;
    double x[n+1],y[n+1];
    h=(b-a)/n;
    for (i=0;i<n+1;i++)
    {
        x[i]=a+i*h;
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i++)
    {
        if (i%3==0)
        sum=sum+2*y[i];
        else
        sum=sum+3*y[i];
    }
    integral=3*h/8*(y[0]+y[n]+sum);
    cout<<"\nThe definite integral  is "<<integral<<"\n"<<endl;
    return 0;
}
