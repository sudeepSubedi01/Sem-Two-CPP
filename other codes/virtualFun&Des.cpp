#include<iostream>
using namespace std;

class employee{
    protected:
        int id;
    public:
        virtual void getdata(){
            cout<<"Enter id: ";
            cin>>id;
        }
        virtual void showdata(){
            cout<<"ID: "<<id<<endl;
        }
        virtual ~employee(){
            cout<<"Employee destructor called";
        }
};
class student{
    protected:
        int roll;
    public:
        virtual void getdata(){
            cout<<"Enter roll: ";
            cin>>roll;
        }
        virtual void showdata(){
            cout<<"Roll: "<<roll<<endl;
        }
        virtual ~student(){
            cout<<"Student destructor called";
        }
};
class manager:public employee, public student{
    protected:
        char name[50];
    public:
        void getdata(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;
        }
        ~manager(){
            cout<<"Manager destructor called";
        }
};
class secretary:public employee{
    protected:
        char depart[50];
    public:
        void getdata(){
            cout<<"Enter department: ";
            cin>>depart;
        }
        void showdata(){
            cout<<"Department: "<<depart<<endl;
        }
        ~secretary(){
            cout<<"Secretary destructor called";
        }
};

int main(){
    employee *eptr;
    student *sptr;
    employee e;
    student s;
    manager m;
    secretary se;

    cout<<"Enter details of manager: "<<endl;
    eptr = &e;
    eptr -> getdata();
    eptr = &m;
    eptr -> getdata();
    sptr = &s;
    sptr -> getdata();

    cout<<"Enter details of secretary: "<<endl;
    eptr = &e;
    eptr -> getdata();
    eptr = &se;
    eptr -> getdata();

    cout<<"Details of manager: "<<endl;
    eptr = &e;
    eptr -> showdata();
    eptr = &m;
    eptr -> showdata();
    sptr = &s;
    sptr -> showdata();

    cout<<"Details of secretary: "<<endl;
    eptr = &e;
    eptr -> showdata();
    eptr = &se;
    eptr -> showdata();
}
