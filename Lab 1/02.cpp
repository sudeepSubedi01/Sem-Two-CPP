// WAP to find the greatest among two numbers using the concept of return by reference.
#include<iostream>
using namespace std;
int calculate(int &a,int &b){
    return ((a>b)?a:b);
}
int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"Greatest number= "<<calculate(n1,n2);
    return 0;
}