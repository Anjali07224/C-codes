#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 10;
    }

    // Declare friend function
    friend void show(A obj);
};

void show(A obj) {
    cout << "Value of x: " << obj.x << endl;
}

int main() {
    A a;
    show(a);
    return 0;
}
