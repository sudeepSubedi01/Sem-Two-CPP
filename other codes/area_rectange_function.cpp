#include<iostream>
using namespace std;
int area_rect(float l, float b)
{
    return l*b;
}
int main()
{
    float length,breadth, area;
    cout<< "enter the length and breadth:";
    cin>> length>> breadth;
    area= area_rect(length, breadth);
    cout<<"The area is: "<<area<<endl;
}