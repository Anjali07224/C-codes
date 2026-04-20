#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;   // Constructor automatically called
    s1.display();

    return 0;
}
