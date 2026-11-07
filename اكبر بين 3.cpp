#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;

    if (x>y && x> z) {
        cout << "the large ="<< x;
    }
    else if (y>x && y>z) {
        cout << "the large =" << y;
    }
    else {
        cout << "the large =" << z;
    }

    return 0;
}