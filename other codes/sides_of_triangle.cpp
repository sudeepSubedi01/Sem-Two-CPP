#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,peri;
    float area, s;

    try{
        cout<<"Enter sides of triangle: "<<endl;
        cin>>a>>b>>c;
        if((a+b)>c && (a+c)>b && (b+c)>a){
            peri = a+b+c;
            s= peri/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"The perimeter of triangle is: "<<peri<<endl;
            cout<<"The area of triangle is: "<<area<<endl;
        }
        else{
            throw a;
        }
    }
    catch(int x){
        cout<<"Cant calculate the area and perimeter"<<endl;
    }
}