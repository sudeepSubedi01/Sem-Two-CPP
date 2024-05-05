//WAP to convert metre to feet using class to class conversion.

#include<iostream>
#include<conio.h>
using namespace std;

class Feet{
    private:
        float ft;
    public:
        Feet(){
            ft = 0;
        }
        Feet(float f1){
            ft = f1;
        }
        void display(){
            cout << "ft = " << ft << endl;
        }
};

class Metre{
    private:
        float m;
    public:
        Metre(){
            m = 0;
        }
        Metre(float m1){
            m = m1;
        }
        void input(){
            cout << "Enter metre" << endl;
            cin >> m;
        }
        operator Feet(){
            float f2 = m * 3.28084;
            return Feet(f2);
        }
};

int main(){
    Feet fi;
    Metre mi(8);
    fi = mi;
    fi.display();
}