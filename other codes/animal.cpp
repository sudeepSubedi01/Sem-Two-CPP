#include <iostream>
#include<string.h>

using namespace std;
class Animal{
    private:
        char name[20];
        int id;
        float cost;
    public:
    Animal(){
        strcpy(name,"novalue");
        id=0;
        cost=0;
    }
    Animal(char name1[],int id1,float cost1){
        strcpy(name,name1);
        id = id1;
        cost = cost1;
    }   
    // void setdata(){
    //     cout<<"Enter name,id and cost: "<<endl;
    //     cin>>name>>id>>cost;
    // }
    void showdata(){
        cout<<name<<"\t"<<id<<"\t"<<cost<<endl;
    }

};
int main(){
    Animal a1,a2("hello",12,89.87);
    cout<<"Name\t ID\t Cost"<<endl;
    a1.showdata();
    a2.showdata();
    return 0;
}