#include "cpp_all_headers.hpp"
using namespace std;

int euclid_algorithm(int &a, int &b) {
  //recursive until a or b is 0
  while(1) {
    //determine which one is greater - > greater one must be in a
    if(b > a) {
      int tmp;
      tmp = a;
      a = b;
      b = tmp;
    }

    //greater minus smaller
    a = a - b;

    if(a == 0 || b == 0) {
      break;
    }
    euclid_algorithm(a, b);
  }

  return a;
}

int main() {
  int a, b;

  cout<<"a:";
  cin >> a;
  cout<<"b:";
  cin >> b;

  euclid_algorithm(a, b);

  cout<<"result:"<<a<<endl;

  return 0;
}
