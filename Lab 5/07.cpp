//WAP to implement multiple handler.

#include <iostream>
#include <stdexcept>

using namespace std;

void processInput(int x) {
    if (x == 0)
        throw invalid_argument("Invalid input: cannot divide by zero");
    else if (x < 0)
        throw runtime_error("Invalid input: negative number");
    
    cout << "Result: " << 100 / x << endl;
}

int main() {
    int input;

    cout << "Enter a number: ";
    cin >> input;

    try {
        processInput(input);
    } catch (const invalid_argument& e) {
        cerr << "Caught invalid_argument: " << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << "Caught runtime_error: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught unknown exception" << endl;
    }

    return 0;
}
