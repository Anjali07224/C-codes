#include <iostream>
using namespace std;

class Test {
public:
    static int count;

    Test() {
        count++;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2, t3;
    Test::showCount();
    return 0;
}
