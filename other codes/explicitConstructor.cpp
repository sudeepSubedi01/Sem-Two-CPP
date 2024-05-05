#include <iostream>
using namespace std;

class MyClass {
public:
    explicit MyClass(int x) {
        cout << "Constructor called with argument: " << x << endl;
    }
};

void func(MyClass obj) {
    cout << "Function called with MyClass object" << endl;
}

int main() {
    MyClass obj1(5); // Constructor called explicitly
    //MyClass obj2 = 10; // Error: implicit conversion not allowed
    //func(15); // Error: implicit conversion not allowed
    return 0;
}
