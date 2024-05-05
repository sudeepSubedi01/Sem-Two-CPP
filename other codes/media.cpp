#include<iostream>
using namespace std;
class media{
    protected:
        float price;
        char name[40];
    public:
        virtual void getdata(){
            cout<<"Enter name and price: "<<endl;
            cin>>name>>price;
        }
        virtual void showdata(){
            cout<<"Name : "<<name<<endl;
            cout<<"Price : "<<price<<endl;
        }
};
class book:public media{
    protected:
        int page;
    public:
        void getdata(){
            cout<<"Enter page of book: "<<endl;
            cin>>page;
        }
        void showdata(){
            cout<<"Page : "<<page<<endl;
        }
};
class video:public media{
    protected:
        int time;
    public:
        void getdata(){
            cout<<"Enter time of tape: "<<endl;
            cin>>time;
        }
        void showdata(){
            cout<<"Time : "<<time<<endl;
        }
};

int main(){
    media *ptr;
    media m;
    book b;
    video v;
    cout<<"Enter the details of book: "<<endl;
    ptr = &m;
    ptr -> getdata();
    ptr = &b;
    ptr -> getdata();

    cout<<"Enter the details of video tape: "<<endl;
    ptr = &m;
    ptr -> getdata();
    ptr = &v;
    ptr -> getdata();

    cout<<"Details of book: "<<endl;
    ptr = &m;
    ptr -> showdata();
    ptr = &b;
    ptr -> showdata();

    cout<<"Details of video tape: "<<endl;
    ptr = &m;
    ptr -> showdata();
    ptr = &v;
    ptr -> showdata();

}