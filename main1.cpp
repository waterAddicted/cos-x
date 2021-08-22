#include <iostream>
#include <cmath>
using namespace std;

double cosinus(double x,double eps)
{
    double s=0;
    double k=0;
    double t=1;
    while(fabs(t)>eps)
    {
        s=s+t;
        t=t*((-x*x)/((k*2+1)*(k*2+2)));
        k=k+1;
    }
    return s;
}

int main()
{
    double eps=0.0000001;
    double x;
    cin>>x;
    cout<<cosinus(x,eps);
}