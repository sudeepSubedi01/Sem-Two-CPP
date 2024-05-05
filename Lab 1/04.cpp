//Function Overloading: WAP to calculate the area of circle, rectangle and square using the concept of function overloading.
#include<iostream>
// #include<iomanip>
using namespace std;

float area(float r)
{
    return 3.14*r*r;
}

float area(int l)
{
    return l*l;
}
float area(float l, float b)
{
    return l*b;
}

int main()
{
    float l_r, b_r, r_c;
    int l_s;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l_r>>b_r;
    cout<<"Enter the length of square: ";
    cin>>l_s;
    cout<<"Enter the radius of circle: ";
    cin>>r_c;

    cout<<"Area of rectangle= "<<area(l_r,b_r)<<endl;
    cout<<"Area of square= "<< area(l_s)<<endl;
    cout<<"Area of circle= "<< area(r_c)<<endl;
    return 0;
}
