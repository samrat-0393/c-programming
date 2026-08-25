#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
Complex add(const Complex& other) {
        Complex add;
        add.real = real + other.real;
        add.imag = imag + other.imag;
        return add;
    }
Complex sub(const Complex& other) {
        Complex sub;
        sub.real = real - other.real;
        sub.imag = imag - other.imag;
        return sub;
    }
     void display() const {
        cout << real << " + " << imag << "i" << endl;
        }
 
};

int main() {
    Complex c1, c2,addition,substaction;

    cout << "--- Enter First Complex Number ---" << endl;
    c1.input();
    cout << "\n--- Enter Second Complex Number ---" << endl;
    c2.input();
addition= c1.add(c2);
substaction=c1.sub(c2);
    cout << "\nFirst Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
cout << "\nSum of the complex numbers: ";
   addition.display();
cout << "substaction of the complex numbers: ";
   substaction.display();
    return 0;
}
