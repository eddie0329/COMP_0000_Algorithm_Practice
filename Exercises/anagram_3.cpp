#include <iostream>
#include <string>
using namespace std;

int main() {
  string a = "abcf";
  string b = "dceff";
  string c = "";
  c.resize(100);
  int number = 0;

  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < a.size(); j++) {
      if(a[i] == a[j]) {
        a.erase
      }
    }
  }

  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < b.size(); j++) {
      if(a[i] == b[j]) {
        c[number] = a[i];
        number++;
        }
      }
    }
  }
  cout<<c<<endl;
}
