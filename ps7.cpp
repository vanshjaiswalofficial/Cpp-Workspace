#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num;

    cout<<"\nEnter Any Number : ";
    cin>>num;

    cout<<"\n("<<num<<")^2 : "<<pow(num,2)<<endl;
    cout<<"("<<num<<")^3 : "<<pow(num,3)<<endl;
    cout<<endl;

    return 0;
}