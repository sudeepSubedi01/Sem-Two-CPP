//Function overriding
#include<iostream>
using namespace std;

class first
{
    protected:
        int a;
    public:
        void input()
        {
            cout << "Enter value of a:"<< endl;
            cin >> a;
        }
};

class second:public first
{
    private:
        int b, sum;
    public:
        void input()
        {
            first::input(); 
            cout << "Enter the value of b: " << endl;
            cin >> b;
        }
        void add()
        {
            sum = a + b;
        }
        void display()
        {
            cout << "The sum is: " << sum << endl;
        }

};


int main()
{
    second s1;
    s1.input();
    s1.add();
    s1.display();

    return 0;
}
