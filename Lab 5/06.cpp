//WAP to implement catching all exception.

#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

double squareRoot(double x) {
    if (x < 0)
        throw x; 
    return sqrt(x);
}

int main() {
    double num;

    cout << "Enter a number to find its square root: ";
    cin >> num;

    try {
        double result = squareRoot(num);
        cout << "Square root of " << num << " is: " << result << endl;
    } catch (double x) {
        cerr << "Error: Cannot find square root of a negative number: " << x << endl;
    }

    return 0;
}
