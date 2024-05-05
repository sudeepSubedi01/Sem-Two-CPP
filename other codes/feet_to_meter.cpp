//Program to convert feet to meter
#include<iostream>
using namespace std;

int main()
{
    float feet, meter;
    cout<<"Enter length in feet: ";
    cin>> feet;
    meter=feet/3.28;
    cout<<feet<<" feet = "<<meter<<"meter";
    return 0;
}