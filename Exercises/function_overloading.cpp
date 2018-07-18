#include "cpp_all_headers.hpp"

using namespace std;

class Complex {
public:

  Complex() {
    a = 0;
    b = 0;
  }

  Complex(int a, int b) {
    this->a = a;
    this->b = b;
  }

  int get_a() { return a; }
  void set_a(int number) { a = number; }

  int get_b() { return b; }
  void set_b(int number) { b = number; }

  void print() {
    cout << a << "+i" << b << endl;
  }

  void print(bool b) {
    if (b) {
      cout << "i" << this->b << "+" << a << endl;
    }
  }

private:

  int a;
  int b;

};

ostream& operator<< (ostream& out, Complex c) {
  cout << c.get_a() << "+i" << c.get_b() << endl;
  return out;
}

Complex operator+ (Complex& c1, Complex& c2) {
    Complex c;
    c.set_a(c1.get_a() + c2.get_a());
    c.set_b(c1.get_b() + c2.get_b());
    return c;
}

int main() {

  Complex c1;
  Complex c2 (1, 2);
  Complex c3 {2, 4};

  cout << (c2 + c3);

  return 0;
}
