#include<iostream>
using namespace std;

class calculate{
    private:
        int *val;
    public:
        calculate(int v){
            cout << "Constructor called" << endl;
            val = new int;
            *val = v;
        }
        ~calculate(){
            delete val;
        }
        void showdata(){
            cout<<"The value is: "<< *val <<endl;
        }
};

int main(){
    calculate *ptr ;
    ptr = new calculate(13);
    ptr -> showdata();
    delete ptr;
}