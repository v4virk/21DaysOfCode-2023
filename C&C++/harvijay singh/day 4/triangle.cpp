#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the length of side 1: \t";
    cin >> a;
    cout << "Enter the length of side 2: \t";
    cin >> b;
    cout << "Enter the length of side 3: \t";
    cin >> c;

    if (a == b && b == c && a == c) {
        cout << "The given triangle is an equilateral triangle\n";
    }
    else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) {
        cout << "The given triangle is an isosceles triangle\n";
    }
    else {
        cout << "The given triangle is a scalene triangle\n";
    }

    return 0;
}

