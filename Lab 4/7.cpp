//container class
#include<iostream>
using namespace std;

class Two;
class One{
    private:
        int a;
    public:
        void input(){
            cout<<"Enter value of a:";
            cin>>a;
        }
};

class Two{
    private:
        int b,s;
        One o1;
    public:
        void input(){
            o1.input();
            cout<<"Enter the value of b:";
            cin>>b;
        }
        void add(){
            // s=o1.a + b;
            s = o1.input() + b;
        }
        void display(){
            cout<<"Sum = "<<s<<endl;
        }
};

int main(){
    Two t1;
    t1.input();
    t1.add();
    t1.display();
}
