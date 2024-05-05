// WAP to convert polar coordinates to Cartesian (rectangular) coordinates using class to class conversion.

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Cart{
    private:
        float x, y;
    public:
        Cart(){
            x = 0;
            y = 0;
        }
        Cart(float i, float j){
            x = i;
            y = j;
        }
        void display(){
            cout << "X = " << x << endl << "Y = " << y << endl;
        }
    
};

class Polar{
    private:
        float r, arg;
    public:
        Polar(){
            r = 0;
            arg = 0;
        }
        Polar(float a, float b){
            r = a;
            arg = b;
        }
        void input(){
            cout << "Enter distance and argument" << endl;
            cin >> r >> arg;
        }
        operator Cart(){
            float m = r * cos(arg);
            float n = r * sin(arg);
            return Cart(m,n);
        }
};

int main(){
    Polar p1(7, 0.5);
    Cart c1;
    c1 = p1;
    c1.display();
}