#include <iostream>

using namespace std;

class MyClass {
public:
  void PrintThis() {
    cout<<"address:"<<this<<endl;
  }
};

int main() {
  MyClass a, b;
  cout<<&a<<endl;
  cout<<&b<<endl;

}
