#include <iostream>
using namespace std;

class Grandparent {
public:
    void gshow() {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent {
public:
    void pshow() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void cshow() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child c;
    c.gshow();
    c.pshow();
    c.cshow();
    return 0;
}
