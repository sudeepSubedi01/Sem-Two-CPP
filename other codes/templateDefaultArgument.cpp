#include<iostream>
using namespace std;

template<class tem=int>
class area{
    private:
        tem l, b;
    public:
        void getdata(){
            cout<<"enter length and breadth:"<<endl;
            cin>>l>>b;
        }
        tem processdata(){
            return l*b;
        }
};
int main(){
    area <int>a1;
    area <>a2;
    area<float>a3;
    a1.getdata();
    a2.getdata();
    a3.getdata();
    cout<<"Area : "<< a1.processdata();
    cout<<"Area : "<< a2.processdata();
    cout<<"Area : "<< a3.processdata();
}