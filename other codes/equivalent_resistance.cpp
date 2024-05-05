#include<iostream>
using namespace std;
int main()
{
    float r1, r2, r_eq;
    cout<<"ENter the values of two resistances: ";
    cin>> r1>> r2;
    r_eq= (r1*r2)/(r1+r2);
    cout<<"Equivalent resistance= "<< r_eq<< endl;
    cout<<"this is the next step\n";
    cout<< "this is the final step";
    return 0;
}