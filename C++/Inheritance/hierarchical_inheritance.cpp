#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

int main() {
    Child1 c1;
    Child2 c2;

    c1.show();
    c2.show();

    return 0;
}
