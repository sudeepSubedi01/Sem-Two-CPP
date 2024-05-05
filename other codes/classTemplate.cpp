#include<iostream>
using namespace std;

template<class tem>
class Area{
    private:
        tem l,b;
    public:
        Area(){
            l=b=0;
        }
        Area(tem len, tem bre){
            l = len;
            b = bre;
        }
        tem processdata(){
            return l*b;
        }
};
int main(){
    Area <int>a1(4,9);
    Area<float>a2(1.1,1.1);
    cout<<"Area ="<<a1.processdata()<<endl;
    cout<<"Area ="<<a2.processdata();


}