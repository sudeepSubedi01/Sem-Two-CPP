// WAP to convert feet to meters [3.28 ft = 1m] using class and object.
#include<iostream>
using namespace std;
class calculate{
    float feet, meter;
    public:
        void getData(){
            cout<<"Enter value in feet: ";
            cin>>feet;
        }
        void processData(){
            meter = feet/3.28 ;
        }
        void displayData(){
            cout<<feet<<" ft = "<<meter<<" m"<<endl;
        }
};

int main(){
    calculate c;
    c.getData();
    c.processData();
    c.displayData();
    return 0;
}