#include<iostream>
using namespace std;

template <class t1, class t2>
t2 addition(t1 x, t2 y){
    float sum;
    sum = x+y;
    return sum;
}

int main(){
    cout<<"Sum of integers: "<< addition<int,int>(2,5)<<endl;
    cout<<"Sum of floats: "<< addition<float,float>(2.2,5.8)<<endl;
    cout<<"Sum of integer and float: "<< addition<int,float>(2,5.5)<<endl;
    return 0;
}
