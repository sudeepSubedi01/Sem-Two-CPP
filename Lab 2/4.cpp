// Create a class named distance with data members foot and inch. Initialize all data members using 
// constructors and use necessary member functions to add two distances and display the result in main().
#include<iostream>
using namespace std;

class Distance{
    private:
        int foot, inch;
    public:
        Distance(){
            foot = inch =0;
        }
        Distance(int f, int i){
            foot = f;
            inch = i;
        }
        Distance processData(Distance d2){
            Distance d;
            d.inch = (inch + d2.inch) % 12;
            d.foot = foot + d2.foot + (inch + d2.inch) / 12 ;
            return d;
        }
        void displaData(){
            cout<<foot<<" Feet, "<< inch<<" Inches"<< endl;
        }

};

int main(){
    Distance d1(2,5);
    Distance d2(3,8);
    Distance d3 = d1.processData(d2);

    cout<<"First distance= ";
    d1.displaData();
    cout<<"Second distance= ";
    d2.displaData();
    cout<<"Resultant distance= ";
    d3.displaData();
    return 0;
}