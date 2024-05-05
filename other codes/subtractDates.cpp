#include<iostream>
using namespace std;

class Date{
    private:
        int d,y,m;
    public:
        void getData(){
            cout<<"Enter year, month and days: "<<endl;
            cin>>y>>m>>d;
        }
        int operator - (Date d2){
            int a,b,temp;
            a= y * 365 + m * 30 + d;
            b= d2.y * 365 + d2.m * 30 + d2.d;
            temp = a-b;
            return temp;
        }
};

int main(){
    Date d1,d2;
    int res;
    d1.getData();
    d2.getData();
    res = d1 - d2;
    cout<<"The difference is: "<<res<<endl;
    return 0;
}