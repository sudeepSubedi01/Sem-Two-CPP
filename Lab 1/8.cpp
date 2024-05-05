// Create a class named complex with data members real and imaginary.
// Use the necessary member function to add two complex numbers and display the result.
#include<iostream>
using namespace std;
class Complex{
    private:
        float real, imag;
    public:
        void getData(){
            cout<<"Enter the complex number: ";
            cin>>real>>imag;
        }
        void processData(Complex c1, Complex c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }
        void displayData(){
            cout<<"Complex number = "<<real<<" + i "<<imag<<endl;
        }

};
int main(){
    Complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3.processData(c1,c2);
    cout<<"The result is:"<<endl;
    c3.displayData();
    return 0;
}