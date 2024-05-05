//WAP to implement stack operations using the concept of template.

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(T const& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty())
            throw out_of_range("Stack<>::pop(): empty stack");
        elements.pop_back();
    }

    T const& top() const {
        if (elements.empty())
            throw out_of_range("Stack<>::top(): empty stack");
        return elements.back();
    }

    bool empty() const {
        return elements.empty();
    }
};

int main() {
    Stack<int> intStack;
    Stack<double> doubleStack;

    intStack.push(0);
    intStack.push(1);
    intStack.push(2);

    cout << "FIRST OUT " << intStack.top() << endl;
    intStack.pop();
    cout << "SECOND OUT " << intStack.top() << endl;

    doubleStack.push(7.22);
    doubleStack.push(2.33);

    cout << "THIRD OUT " << doubleStack.top() << endl;

    return 0;
}
