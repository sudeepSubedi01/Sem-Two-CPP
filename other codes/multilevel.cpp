#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
    public:
        void getStudent(){
            cout<<"Enter the roll of student: "<<endl;
            cin>>roll;
        }
        void showStudent(){
            cout<<"Roll no: "<<roll<<endl;
        }
};

class test:public student{
    protected:
        int m1,m2;
    public:
        void getTest(){
            cout<<"Enter marks in two subjects: "<<endl;
            cin>>m1>>m2;
        }
        void showTest(){
            cout<<"Mark1: "<<m1<<endl<<"Mark2: "<<m2<<endl;
        }
};

class result:public test{
    protected:
        int total;
    public:
        void processData(){
            total = m1 + m2;
        }
        void displayData(){
            cout<<"Roll no: "<<roll<<endl;
            cout<<"Mark1: "<<m1<<endl<<"Mark2: "<<m2<<endl;
            cout<<"Total marks: "<<total<<endl;
        }
};
int main(){
    result r;
    r.getStudent();
    r.getTest();
    r.processData();
    r.displayData();
    return 0;
}