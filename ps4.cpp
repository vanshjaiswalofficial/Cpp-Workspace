#include<iostream>
using namespace std;
int main ()
{
    int si,p,r,t;
    cout<<"\nEnter Principle Amount (Rs.) : ";
    cin>>p;

    cout<<"Enter Rate Of Interest (%): ";
    cin>>r;

    cout<<"Enter Time (years) : ";
    cin>>t;

    si=(p*r*t)/100;

    cout<<"\nSimple Interest : Rs  "<<si;

    return 0;
}