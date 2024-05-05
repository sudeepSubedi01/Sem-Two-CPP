//class type to basic type conversion
#include<iostream>
using namespace std;

class meter{
    private:
        float val;
    public:
        void getData(){
            cout<<"Enter value in meter: "<<endl;
            cin>>val;
        }
        operator float(){
            float temp;
            temp = val /1000;
            return temp;
        }

};
int main(){
    meter m1;
    float km;
    m1.getData();
    km = m1;  //km = m1.float();
    cout<<"Kilometer = "<<km;
    return 0;
}