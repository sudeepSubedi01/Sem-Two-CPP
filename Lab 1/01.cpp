//Pass by reference: TSA, CSA and volume of cylinder
#include<iostream>
using namespace std;

void calculate(float r, float h, float &csa, float &tsa, float &vol)
{
    tsa = 2*3.14*r*(r+h);
    csa = 2*3.14*r*h;
    vol = 3.14*r*r*h;
}

int main(){
    float r,h, csa,tsa,vol;
    cout<<"Enter the radius and height of cylinder: ";
    cin>>r>>h;
    calculate(r,h,csa,tsa,vol);
    cout<<"TSA= "<< tsa <<endl;
    cout<<"CSA= "<< csa <<endl;
    cout<<"Volume= "<< vol <<endl;
    return 0;
}