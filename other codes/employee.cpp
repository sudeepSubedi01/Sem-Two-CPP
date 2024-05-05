#include <fstream>
#include <iostream>
using namespace std;
class Employee
{
public:
    char name[20];
    int age;
    float salary;
};
int main()
{
    Employee emp;
    // ofstream outf;
    // outf.open("employee.dat", ios::out);
    ofstream outf("employee.dat");
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name, age, salary: ";
        cin >> emp.name >> emp.age >> emp.salary;
        outf.write((char *)&emp, sizeof(emp));
    }
    outf.close();
    ifstream inf;
    inf.open("employee.dat", ios::in);
    cout<<"The details are as follows:"<<endl;
    cout<<"Name\tAge\tSalary"<<endl;
    // for (int i = 0; i < 2; i++)
    while(inf.read((char *)&emp, sizeof(emp)))
    {
        if (emp.salary >= 25000 && emp.salary <= 50000)
        {
            cout << emp.name << "\t"
                 << emp.age << "\t"
                 << emp.salary << endl;
        }
    }
    inf.close();
    return 0;
}