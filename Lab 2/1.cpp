// WAP to illustrate the concept of different types of constructors.
#include<iostream>
using namespace std;

class Complex{
    float real , imag;

    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(float r, float i){
            real = r;
            imag = i;
        }
        Complex( Complex &c){
            real = c.real;
            imag = c.imag;
        }
        void displayData(){
            cout<<"Complex number: "<<real<<" + i "<<imag<<endl;
        }
        ~Complex()
        {
            cout<<"Object Destroyed"<<endl;
        }
};

int main()
{
    Complex c1;
    Complex c2(1.7,2.5);
    Complex c3(c2);
    c1.displayData();
    c2.displayData();
    c3.displayData();
}