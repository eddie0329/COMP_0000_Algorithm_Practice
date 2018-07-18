#include "cpp_all_headers.hpp"

using namespace std;

/*
Call by Value => C, C++, JAVA
Call by Reference
*/

void function1(int n) {
  n = 1;
}

void function2(int *p_n) {
  *p_n = 1;
}

void function3(int &n) {
  n = 1;
}

int main() {

  int n = 0;

  int *p_n;
  p_n = &n;

  function1(n);
  cout << "FUNCTION1: " << n << endl;

  function2(p_n);
  cout << "FUNCTION2: " << n << endl;

  function3(n);
  cout << "FUNCTION3: " << n << endl;

  return 0;
}
