//WAP to implement rethrow exception

#include <iostream>
#include <stdexcept>

using namespace std;

void FUNCTION() {
    throw runtime_error("Exception in FUNCTION()");
}

int main() {
    try {
        FUNCTION();
    } catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
