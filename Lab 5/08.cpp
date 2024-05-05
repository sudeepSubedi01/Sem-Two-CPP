//WAP to scan details of 48 students and write it to a file student.txt. Also scan the details of students from the file and display to the console.

#include <iostream>
#include <fstream>

using namespace std;

class Student {
public:
    int id;
    char name[20], fac[20];
};

int main() {
    Student s[3]; 
    ofstream outf("student.txt");

    cout << "Enter the details of 3 students:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter name, faculty, and id of student " << i + 1 << ":" << endl;
        cin >> s[i].name >> s[i].fac >> s[i].id;
        outf << s[i].name << " " << s[i].fac << " " << s[i].id << endl;
    }
    outf.close();

    ifstream inf("student.txt");
    cout << "The details of 3 students:" << endl;
    cout << "Name\tFaculty\tID" << endl;
    for (int i = 0; i < 3; i++) {
        inf >> s[i].name >> s[i].fac >> s[i].id;
        cout << s[i].name << "\t" << s[i].fac << "\t" << s[i].id << endl;
    }
    inf.close();

    return 0;
}