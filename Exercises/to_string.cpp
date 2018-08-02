#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  int num = 2;
  string pg = "";
  stringstream s;

  s<<num;
  pg = s.str();
  cout<<pg[0]<<endl;
}
