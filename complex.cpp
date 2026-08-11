#include <iostream>
using namespace std;

int main() {
  int real1, imaginary1, real2, imaginary2;

  cout << "Enter real and imaginary parts of first number: ";
  cin >> real1 >> imaginary1;

  cout << "Enter real and imaginary parts of second number: ";
  cin >> real2 >> imaginary2;

  cout << "Addition: " << real1 + real2 << " + "
     << imaginary1 + imaginary2 << "i" << endl;

  cout << "Subtraction: " << real1 - real2 << " + "<< imaginary1 - imaginary2 << "i" << endl;

  return 0;
}
