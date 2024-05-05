#include<iostream>

using namespace std;

namespace Hello{
    int num;
    void showData(int n){
        cout<<"The number is "<<n<<endl;
    }
}

int main(){
    Hello::num=50;
    Hello::showData(Hello::num);
}