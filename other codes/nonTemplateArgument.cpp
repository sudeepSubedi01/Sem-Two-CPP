#include<iostream>
using namespace std;

template<class tem, int size>
class array{
    private:
        tem a[size];
    public:
        void getdata(){
            int i;
            for(i=0;i<size; i++){
                cout<<"Enter a number: ";
                cin>>a[i];
            }
        }
        void showdata(){
            int i;
            cout<<"Entered numbers: "<<endl;
            for(i=0;i<size; i++){
                cout<<a[i]<<endl;
            }
        }
};
int main(){
    array <int,10> a1;
    array <float,2> a2;
    a1.getdata();
    a2.getdata();
    a1.showdata();
    a2.showdata();
}