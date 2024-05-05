#include<iostream>
using namespace std;

int addition(int x, int y){
    cout<<"normal integer function"<<endl;
    return x +y;
}

template<class tem>
tem addition(tem x, tem y){
    cout<<"template function"<<endl;
    return (x+y);   
}

int main(){
    float a=3.6, b=7;
    cout<<"Sum of two ingegers: "<< addition(5,6)<<endl;
    cout<<"Sum of two integers: "<< addition<int>(1,3)<<endl;
    cout<<"Sum of two floats: "<< addition(7.8,1.2)<<endl;
    cout<<"Sum of two floats: "<< addition<int>(a,b)<<endl;
}