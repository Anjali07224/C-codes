#include <iostream>
using namespace std;

class Demo {
public:
    void display();
};

// Using scope resolution operator
void Demo::display() {
    cout << "Function defined outside class" << endl;
}

int main() {
    Demo d;
    d.display();
    return 0;
}
