#include<iostream>
using namespace std;
int main()
{
    float c,f;

    cout<<"\nEnter the value of temperature (in C) :  ";
    cin>>c;

    f= (c*9/5)+32;

    cout<<"The value of temperature (in F) :  "<<f;

    return 0;
}