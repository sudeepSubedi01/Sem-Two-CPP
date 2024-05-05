#include <iostream>
using namespace std;
class complex
{
    float real;
    float imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    void showdata() const
    {
        cout << real << "+i" << imag << endl;
    }
};
int main()
{
    complex c1(5,7);
    const complex c2(1.1, 2.4);
    c1.showdata();
    c2.showdata();
    return 0;
}