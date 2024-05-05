#include<iostream>
using namespace std;

class celsius;
class fahren{
    private:
        float far;
    public:
        fahren(){
            far = 0;
        }
        fahren(float f1){
            far = f1;
        }
        void showdata(){
            cout<<"The equivalent is: "<<far;
        }
};
class celsius{
    private:
        float cel;
    public:
        void getdata(){
            cout<<"Enter celsius: "<<endl;
            cin>>cel;
        }
        operator fahren(){
            float temp;
            temp = cel * 2;
            return fahren(temp);
        }
};
int main(){
    fahren f;
    celsius c;
    c.getdata();
    f = c;
    f.showdata();
}
    
