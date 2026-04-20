#include <iostream>
using namespace std;

class Math {
public:
    // Function with 2 parameters
    int add(int a, int b) {
        return a + b;
    }

    // Function with 3 parameters (overloaded)
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;

    cout << "Sum of 2 numbers: " << m.add(5, 10) << endl;
    cout << "Sum of 3 numbers: " << m.add(5, 10, 15) << endl;

    return 0;
}
