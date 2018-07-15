#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  string str1 = "23 259 .326 22 a 15";

  stringstream ss(str1);
  string k;
  while(ss>>k) {
    cout<<k<<endl;
  }

  return 0;
}
