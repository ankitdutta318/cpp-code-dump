#include<iostream>
using namespace std;

float Area(int r) {
    return 3.14*r*r;
}

float Area(int l, int b) {
    return l*b;
}

float Area(int a, int b, int h) {
    return (0.5*(a+b)*h);
}

int main() {
    int k, a, b, c;
    cout << "Enter: \n1. Area of Circle \n2. Area of Rectangle \n3. Area of Trapezium\n";
    cin >> k;
    switch(k) {
    case 1:
        cout << "Enter radius of the circle.\n";
        cin >> a;
        cout << "Area of Circle is: " << Area(a);
        break;
    case 2:
        cout << "Enter length & breadth of the rectangle.\n";
        cin >> a >> b;
        cout << "Area of Rectangle is: " << Area(a, b);
        break;
    case 3:
        cout << "Enter sides & height of the trapezium.\n";
        cin >> a >> b >> c;
        cout << "Area of Trapezium is: " << Area(a, b, c);
        break;
    default:
        cout << "Invalid choice!";
    }
    return 0;
}
