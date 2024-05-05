#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float num;
    cout<<"Enter a number: "<< endl;
    cin>>num;
    try{
        if(num<0){
            throw num;
        }
        else{
            cout<<"Square root of "<<num<<" is: "<<sqrt(num)<<endl;
        }
    }
    catch(int num){
        cout<<num<<"is a negative number and square root cannot be calculated"<< endl;
    }
}