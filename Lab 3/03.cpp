//Unary Operator Overloading: WAP to overload decrement operator using the concept of operator overloading
#include<iostream>
using namespace std;

class UnaryOL{
    private:
        int value;
    public:
        void getData(){
            cout<<"Enter a number:";
            cin>> value;
        }
        void displayData(){
            cout<< value;
        }
        UnaryOL operator ++ (){
            UnaryOL temp;
            temp.value = ++ value;
            return temp;     
        }
};

int main(){
    UnaryOL v1, v2;
    v1.getData();
    v2 = ++v1;
    cout<<"Incremented value:"<<endl;
    v2.displayData();
}