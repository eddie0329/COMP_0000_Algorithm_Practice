#include <iostream>
#include <string>
using namespace std;

int main () {
  string a = "cde";
  string b = "bcfc";
  string c = "";
  //string d = " "; // "abcde"
  int number = 0;
  // int dual = 0;
  int result = 0;

  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < b.size(); j++) {
      if(a[i] == b[j]) {
        number++;
        c.resize(number);
      }
      if(c == c) {
        number --;
        c.resize(number);
      }
    }
  }
  cout<<c.size()<<endl;

  return 0;
}
