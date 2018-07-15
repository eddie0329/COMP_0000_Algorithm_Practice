#include <iostream>
#include <string>
#define SPACEBAR char(32)
using namespace std;

int main() {
  string a = "abcd";
  string b = "ef";
  string c = a + b;



  cout<<a.size()<<SPACEBAR<<b.size()<<endl;
  cout<<c<<endl;

  return 0;
}
