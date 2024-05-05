// Returning Object: Create a class named distance with data members' feet and inches. 
// Use the necessary member function and WAP to add two distances and display the result in main().
#include<iostream>
using namespace std;
class Distance{
    private:
        int feet, inch;
    public:
        void getData(){
            cout<<"Enter the value in feet and inch: ";
            cin>>feet>>inch;
        }
        Distance processData(Distance d2){
            Distance d;
            d.inch = (inch + d2.inch) % 12;
            d.feet = feet + d2.feet + (inch + d2.inch) / 12;
            return d;
        }
        void displayData(){
            cout<< feet<<" feet and "<< inch<<" inches"<<endl;
        }
};

int main(){
    Distance d1,d2,d3;
    d1.getData();
    d2.getData();
    d3 = d1.processData(d2);
    d3.displayData();
    return 0;
}