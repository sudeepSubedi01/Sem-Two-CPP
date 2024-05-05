#include<iostream>
#include<cmath>
using namespace std;

class polygon{
    protected:
        float length,height;
    public:
        polygon(){
            length = height = 0;
        }
        polygon(float l, float h){
            length = l;
            height = h;
        }
        virtual float area()=0;
};

class rectangle:public polygon{
    public:
        rectangle(){
        }
        rectangle(float l,float h):polygon(l,h){
        }
        float area(){
            return length*height;
        }
};

class triangle:public polygon{
    public:
        
        triangle(){
        }
        triangle(float l, float h):polygon(l,h){
        }
        float area(){
            return 0.5*length*height;
        }
};

int main(){
    polygon *ptr;
    rectangle rect(5,5);
    triangle tri(2,2);
    ptr = &rect;
    cout<<"Area of rectangle: "<< ptr->area()<<endl;

    ptr = &tri;
    cout<<"Area of triangle: "<< ptr->area()<<endl;
}