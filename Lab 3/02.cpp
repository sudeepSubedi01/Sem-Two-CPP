//Friend Class: WAP to create two classes, `ClassA` and `ClassB`, make `ClassB` a friend of `ClassA`, 
//and demonstrate how `ClassB` can access and display the private variable of `ClassA`.

#include<iostream>
using namespace std;

class ClassB;  // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    void getDataA() {
        cout << "Enter a number: ";
        cin >> valueA;
    }

    // Friend declaration for ClassB
    friend class ClassB;
};

class ClassB {
public:
    void displayDataB(const ClassA objA) {
        cout << "The value in class A accessed from ClassB is: " << objA.valueA << endl;
    }
};

int main() {
    ClassA c1;
    ClassB c2;

    c1.getDataA();
    c2.displayDataB(c1);

    return 0;
}
