#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int a, b, c, d, x1, x2;
    
    cout << "ax^2 + bx + c \nwhere a != 0" << endl;
    cout << "Enter the coefficients of the equation:" << endl;
    
    cout << "Enter the first coefficient a: ";
    cin >> a;
    
    cout << "Enter the second coefficient b: ";
    cin >> b;
    
    cout << "Enter the third coefficient c: ";
    cin >> c;
     
    d = (b * b) - (4 * a * c);
    
    if (d > 0) {
        cout << "Real roots" << endl;

        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "Root 1: x1 = " << x1 << endl;
        cout << "Root 2: x2 = " << x2 << endl;      
    }
    else if (d == 0) {
        cout << "Real and equal roots" << endl;
        x1 = (-b) / (2 * a);

        cout << "Roots: x1 = x2 = " << x1 << endl;
        
    }
    else {
        cout << "Imaginary roots" << endl;
    }
    
    return 0;
}
