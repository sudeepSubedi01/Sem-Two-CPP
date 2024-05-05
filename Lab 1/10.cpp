// Returning Object: Create a class named complex with data members real and imaginary.
// Use the necessary member function to add two complex numbers and display the result in main().
#include<iostream>
using namespace std;
class Complex{
    private:
        float real, imag;
    public:
        void getData(){
            cout<<"Enter complex number: ";
            cin>>real>>imag;
        }
        Complex processData(Complex c2){
            Complex c;
            c.real = real + c2.real;
            c.imag = imag + c2.imag;
            return c;
        }
        void displayData(){
            cout<<real<<"+ i "<<imag<<endl;
        }        
};

int main(){
    Complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3 = c1.processData(c2);
    cout<<"The sum of complex numbers is:  ";
    c3.displayData();
    return 0;
}