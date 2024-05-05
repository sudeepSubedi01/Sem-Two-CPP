//Program to convert celsius to fahrenit
#include<iostream>
using namespace std;
int main()
{
    float cel,fah;
    cout<<"Enter temperature in celsius: ";
    cin>>cel;
    fah=9*cel/5+32;
    cout<<"Eqiuvalent temperature= "<<fah<<endl ;
    return 0;
}