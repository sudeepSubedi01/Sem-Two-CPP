#include<iostream>
#include<cmath>
using namespace std;

class polygon{
    protected:
        float length,breadth,a,b,c;
    public:
        polygon(){
            length = breadth= a=b=c= 0;
        }
        polygon(float l, float b){
            length = l;
            breadth = b;
        }
        polygon(float aa, float bb, float cc){
            a=aa;
            b=bb;
            c=cc;   
        }
        virtual float area()=0;
};

class rectangle:public polygon{
    public:
        rectangle(){
        }
        rectangle(float l,float b):polygon(l,b){
        }
        float area(){
            return length*breadth;
        }
};

class triangle:public polygon{
    public:
        
        triangle(){
        }
        triangle(float a1, float b1, float c1):polygon(a1,b1,c1){
        }
        float area(){
            float ans,s;
            s=(a+b+c)/2.0;
            ans=sqrt(s*(s-a)*(s-b)*(s-c));
            return ans;
        }
};

int main(){
    polygon *ptr;
    rectangle rect(5,5);
    triangle tri(2,2,2);
    ptr = &rect;
    cout<<"Area of rectangle: "<< ptr->area()<<endl;

    ptr = &tri;
    cout<<"Area of triangle: "<< ptr->area()<<endl;
}