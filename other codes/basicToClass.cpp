//basic to user defined (class) type conversion
#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(){
            real = imag =0;
        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        void showData(){
            cout<<"The complex number: "<<real<< " +i "<<imag<<endl;
        }
};
int main(){
    Complex c1;
    int r1,i1;
    cout<<"Enter a complex number: "<<endl;
    cin>>r1>>i1;
    Complex c2(r1,i1);
    c1.showData();
    c2.showData();
    return 0;
}