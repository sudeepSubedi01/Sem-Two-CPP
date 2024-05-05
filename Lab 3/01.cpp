//Friend Function: WAP to find the sum of a data member of 2 different classes using the concept of friend functions.
#include<iostream>
using namespace std;

class Complex{
    float real, imag;

    public:
        void getData(){
            cout<<"Enter complex number: ";
            cin>>real>>imag;
        }
        void showData(){
            cout<<real<<" + i "<<imag<<endl;
        }
        friend Complex processData(Complex, Complex);
};

Complex processData(Complex cc1, Complex cc2){
    Complex temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}

int main(){
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3 = processData(c1, c2);
    cout<<"The sum is: ";
    c3.showData();
}
