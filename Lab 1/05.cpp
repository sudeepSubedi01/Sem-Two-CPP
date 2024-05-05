// WAP to calculate the area and perimeter of the circle by using the concept of class and object.
#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
class calculate{
    float r,area,peri;
    public:
        void getData(){
            cout<<"Enter radius of circle: ";
            cin>>r;
        }
        void processData(){
            area= PI * pow(r,2);
            peri = 2 * PI * r;
        }
        void displayData(){
            cout<<"Area= "<<area<<endl<<"Perimeter= "<<peri<<endl;
        }
};

int main(){
    calculate c;
    c.getData();
    c.processData();
    c.displayData();
    return 0;
}