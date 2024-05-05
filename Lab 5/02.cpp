//WAP to implement the concept of function template overloading.
#include <iostream>

using namespace std;

template <typename Tem>
Tem add(Tem a, Tem b) {
    return a + b;
}

template <typename Tem>
Tem add(Tem a, Tem b, Tem c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 5 and 3: " << add(5, 3) << endl;

    cout << "Sum of 4.5 and 2.3: " << add(4.5, 2.3) << endl;

    cout << "Sum of 2, 4, and 6: " << add(2, 4, 6) << endl;

    cout << "Sum of 1.2, 3.4, and 5.6: " << add(1.2, 3.4, 5.6) << endl;

    return 0;
}
