#include<iostream>
using namespace std;

class student{
    public:
        // virtual void show()=0;  //pure virtual function
        virtual void show()
        {
            cout<<"Inside student class"<<endl;
        }
        
};
class engineering:public student{
    public:
        void show(){
            cout<<"Inside engineering class"<<endl;
        }
};
class medical:public student{
    public:
        void show(){
            cout<<"Inside medical class"<<endl;
        }
};
class science:public student{
    public:
        void show(){
            cout<<"Inside science class"<<endl;
        }
};
int main(){
    // student *ptr;
    // student st;
    // engineering e;
    // medical m;
    // science s;
    // ptr = &st;
    // ptr -> show();
    // ptr = &e;
    student *ptr = new engineering;
    ptr -> show();
    delete ptr;

    // ptr = &m;
    student *ptr1 = new medical;
    ptr1 -> show();
    delete ptr1;

    // ptr = &s;
    student *ptr2 = new science;
    ptr2 -> show();
    delete ptr2;

    return 0;
}