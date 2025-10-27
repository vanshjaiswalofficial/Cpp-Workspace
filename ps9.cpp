#include<iostream>
using namespace std;
int main ()
{
    float p,c,m,en,hi,avg,per,total;

    cout<<"\nEnter Physics Marks : ";
    cin>>p;

    cout<<"Enter Chemistry Marks : ";
    cin>>c;

    cout<<"Enter Maths Marks : ";
    cin>>m;

    cout<<"Enter English Marks : ";
    cin>>en;

    cout<<"Enter Hindi Marks : ";
    cin>>hi;

    cout<<"\nTotal = "<<p+c+m+en+hi;
    cout<<"\nPercentage ="<<(p+c+m+en+hi)/5<<"%";

    return 0;
}