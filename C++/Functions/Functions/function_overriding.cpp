#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {   // overriding
        cout << "This is Derived class function" << endl;
    }
};

int main() {
    Derived d;
    d.show();

    return 0;
}
