//WAP to calculate the perimeter of a rectangle using the concept of class template.

#include <iostream>

using namespace std;

template <class tem>
class Rectangle {
private:
    tem length;
    tem width;

public:
    Rectangle(tem l, tem w) : length(l), width(w) {}

    tem calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle<int> intRect(2, 1);
    Rectangle<float> floatRect(2.5, 2.5);

    cout << "Perimeter of integer rectangle: " << intRect.calculatePerimeter() << endl;
    cout << "Perimeter of float rectangle: " << floatRect.calculatePerimeter() << endl;

    return 0;
}
