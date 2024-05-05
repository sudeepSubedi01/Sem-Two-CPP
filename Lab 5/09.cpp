//WAP to scan details of 50 employees and write it to a file named employee.dat. Also scan the details of employee from the file and display the information of only those employees whose salary is between 25000 and 50000. 

//
#include <iostream>
#include <fstream>

using namespace std;

class Employee {
public:
    int id, salary;
    string name;

    void input() {
        cout << "Enter name, salary, and id of employee: ";
        cin >> name >> salary >> id;
    }

    void display() {
        cout << name << "\t" << salary << "\t" << id << endl;
    }
};

int main() {
    int i;
    Employee s;
    ofstream outf("employee.bin");
    for (int i = 0; i < 3; i++) {
        s.input();
        outf << s.name << "\t" << s.salary << "\t" << s.id << endl;
    }
    outf.close();

    ifstream inf("employee.bin");
    cout << "Employees with salary between 25000 and 50000:" << endl;
    while (inf >> s.name >> s.salary >> s.id) {
        if (s.salary >= 25000 && s.salary <= 50000)
        {
            s.display();
        }    
    }
    inf.close();

    return 0;
}
