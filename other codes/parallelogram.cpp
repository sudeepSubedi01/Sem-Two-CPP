#include<iostream>
#include<cmath>
using namespace std;

class parallelogram{
    protected:
    float length,breadth;
    public:
        parallelogram(){
            length = breadth = 0;
        }
        parallelogram(float l, float b){
            length = l;
            breadth = b;
        }
        virtual float perimeter(){
            return 2*(length+breadth);
        }
        virtual float area()=0;
};

class rectangle:public parallelogram{
    public:
        rectangle(){
        }
        rectangle(float l,float b):parallelogram(l,b) {
        }
        float area(){
            return length*breadth;
        }
        // float perimeter(){
        //     return 2*length;
        // }
};

int main(){
    parallelogram *pgm;
    rectangle rec(2.5,7.9);
    pgm = &rec;
    cout<<"Perimeter = "<< pgm->perimeter() << endl;
    cout<<"Area = "<< pgm->area()<<endl;
    return 0;
}