#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float ci,a,p,r,t;

    cout<<"\nEnter Principle Amount (Rs.) : ";
    cin>>p;

    cout<<"Enter Rate of Interest (%) : ";
    cin>>r;

    cout<<"Enter Time (years) : ";
    cin>>t;

    a= p*pow((1+r/100), t);
    cout<<"\nTotal Amount (A) : Rs. "<<a;

    ci=a-p;

    cout<<"\nCompound Interest (CI) : Rs. "<<ci;

    return 0;
}