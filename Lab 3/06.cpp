//Relational Operator Overloading: WAP to compare the values of two different objects by overloading < operator.
#include<iostream>
using namespace std;
class Compare{
    float value;
    public:
        void getData(){
            cout<<"Enter a value:";
            cin>> value;
        }
        void displayData(){
            cout<<value<<endl;
        }

        float operator < (Compare v){
            return ((value < v.value)?1:0);
        }
};

int main(){
    Compare v1, v2;
    v1.getData();
    v2.getData();

    if (v1 < v2){
        cout<<"Smaller number: ";
        v1.displayData();
        cout<<"Greater number: ";
        v2.displayData();
    }
    else{
        cout<<"Smaller number: ";
        v2.displayData();
        cout<<"Greater number: ";
        v1.displayData();
    }
    return 0;
}
