#include<iostream>
#include<fstream>

using namespace std;

class Employee{
    private:
    public:
        char name[45], add[20];
        int sal;
        void getData(){
            cout<<"Enter name, address and salary: ";
            cin>>name>>add>>sal;
        }
};

int main(){
    Employee e;
    int i;
    ofstream outf("employee.txt");
    for(i=0;i<3;i++){
        e.getData();
        outf<<e.name<<" "<<e.add<<" "<<e.sal<<" ";
    }
    outf.close();
    ifstream inf("employee.txt");
    cout<<endl<<"Name\tAddress\tSalary"<<endl;
    for(i=0;i<10;i++){
        inf>>e.name>>e.add>>e.sal;
        if(e.sal>25000&& e.sal<=50000)
        {
            cout<<e.name<<"\t"<<e.add<<"\t"<<e.sal<<endl;
        }
    }
    inf.close();
    return 0;
}