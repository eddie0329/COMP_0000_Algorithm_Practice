#include <iostream>
#include <string>
#define SPACEBAR char(32)
using namespace std;

int main() {
  string a = "";
  cin>>a;
  string b = "";
  cin>>b;
  string c = a + b;
  string d = b[0] + a.substr(1);
  string f = a[0] + b.substr(1);

  cout<<a.size()<<SPACEBAR<<b.size()<<endl;
  cout<<c<<endl;

  strcpy(a, b);
  cout<<d<<SPACEBAR<<f<<endl;

  return 0;
}
