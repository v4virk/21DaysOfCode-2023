#include <iostream>
using namespace std;

int GCD(int x, int y) {
    if (y == 0) {
        return x;
    }
    return GCD(y, x % y);
}

int LCM(int x, int y) {
    int gcd = GCD(x,y);
    return (x*y)/gcd;
}

int main() {
    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;

    cout<<"Enter n2: ";
    cin>>n2;

    int lcm = LCM(n1,n2);
    cout<<"LCM of "<<n1<<" and "<<n2<<" is: "<<lcm<<"\n";
}