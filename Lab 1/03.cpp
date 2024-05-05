//Default argument and inline function: WAP to calculate simple interest using the comcept of inline function and by taking the 
//default value of rate 15%
#include<iostream>
using namespace std;

inline float calculate(float p, float t, float r=15)
{
    // cout<<"Hello i m talking from inline functionr and radius = "<<r<<endl;
    return (p*t*r)/100;
}

int main()
{
    float p,t;
    cout<<"Enter the value of principal and time: ";
    cin>>p>>t;
    cout<<"Simple interest= "<< calculate(p,t);
    return 0;
}