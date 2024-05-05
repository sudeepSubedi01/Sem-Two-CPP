// Ambiguity in Multiple inheritance and resolution

#include<iostream>
using namespace std;

class first
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }
};

class second
{
protected:
    int b;

public:
    void input()
    {
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
};

class sum : public first, public second
{
private:
    int s;

public:
    void add()
    {
        s = a + b;
    }
    void display()
    {
        cout << "The addition is: " << s << endl;
    }
};

int main()
{
    sum s1;
    s1.first ::input();
    s1.second ::input();
    s1.add();
    s1.display();
    return 0;

    return 0;
}