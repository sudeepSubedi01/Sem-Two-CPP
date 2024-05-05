#include<iostream>
#include<cmath>
using namespace std;

class polygon{
    protected:
        float length,breadth,a,b,c;
    public:
        virtual float area()=0;
};

class rectangle:public polygon{
    public:
        rectangle(){
            length = breadth= 0;
        }
        rectangle(float l,float b)
        {
            length = l;
            breadth = b;
        }
        float area(){
            return length*breadth;
        }
};

class triangle:public polygon{
    public:
        
        triangle(){
            a=b=c= 0;
        }
        triangle(float aa, float bb, float cc){
            a=aa;
            b=bb;
            c=cc;
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