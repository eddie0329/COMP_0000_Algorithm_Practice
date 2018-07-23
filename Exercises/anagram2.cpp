#include <iostream>
#include <string>
using namespace std;

int main () {
  string a = "cde";
  string b = "abc";
  string c = " "; // "c"
  int number = 0;
  int result = 0;

  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < b.size(); j++) {
      if(a[i]==b[j]) {
        c[number] = b[j];
        number ++;
      }
    }
  }
  result = (a.size() + b.size()) - 2*(c.size());
  cout<<result<<endl;

  return 0;
}
