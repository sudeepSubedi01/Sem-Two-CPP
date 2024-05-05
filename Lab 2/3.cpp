// Create a class named complex with data members real and imaginary. Initialize all the data members 
// using constructors and use necessary member functions to add two complex numbers and display the result in main().
#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(){

        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        void processData(Complex c1, Complex c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void displayData(){
            cout<<"Complex number: "<<real<<" + i "<<imag<<endl;
        }
        
};

int main(){
    Complex c1(7,10);
    Complex c2(3,5);
    Complex c3;
    c3.processData(c1, c2);
    cout<<"The first complex number =";
    c1.displayData();
    cout<<"The second complex number =";
    c2.displayData();
    cout<<"The resultant complex number =";
    c3.displayData();
    
    return 0;
}