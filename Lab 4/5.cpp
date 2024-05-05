//invocation of constructor and destructor in single inheritance.

#include <iostream>
using namespace std;

class first
{
public:
    first()
    {
        cout << "Base class constructor is called" << endl;
    }
    ~first()
    {
        cout << "Base class destructor is called" << endl;
    }
};

class second : public first
{
public:
    second()
    {
        cout << "Constructor of derived class is called." << endl;
    }
    ~second()
    {
        cout << "Destructor of derived class is called." << endl;
    }
};

int main()
{
    second s;

    return 0;
}