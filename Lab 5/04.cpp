//WAP to find the square root of a number using the concept of exception handing.

#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

double squareRoot(double x) {
    if (x < 0)
        throw invalid_argument("Cannot find square root of a negative number");
    return sqrt(x);
}

int main() {
    double num;

    cout << "Enter a number to find its square root: ";
    cin >> num;
    
    try {
        double result = squareRoot(num);
        cout << "Square root of " << num << " is: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
