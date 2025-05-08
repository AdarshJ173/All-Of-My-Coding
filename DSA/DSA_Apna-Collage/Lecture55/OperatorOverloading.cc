#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {  // Default constructor with default values
        real = r;
        imag = i;
    }

    Complex operator + (const Complex &obj) {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display() {  // Added missing parentheses
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(12, 7);  // Create a complex number
    Complex c2(6, 7);  // Create another complex number
    Complex c3 = c1 + c2;  // Add them using overloaded operator

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c1 + c2: ";
    c3.display();

    return 0;
}