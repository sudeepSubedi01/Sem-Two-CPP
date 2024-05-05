#include <iostream>
using namespace std;

// Non-template function to add two integers
int add(int a, int b) {
    cout << "Non-template function: ";
    return a + b;
}

// Function template to add two values of any type
template <class T>
T add(T a, T b) {
    cout << "Template function: ";
    return a + b;
}

int main() {
    // Call the non-template function
    cout << "Sum of integers: " << add(5, 3) << endl;

    // Call the template function with integers
    cout << "Sum of integers using template function: " << add<int>(5, 1) << endl;

    // Call the template function with doubles
    cout << "Sum of doubles using template function: " << add(5.5, 3.3) << endl;

    return 0;
}
