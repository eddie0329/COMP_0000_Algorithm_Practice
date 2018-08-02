#include <iostream>
#include <vector>
#include <string>

using namespace std;

int superDigit(string n, int k) {

}
ss

int main() {
    string n = "123";
    int k = 3;
    string x = "";
    int result = 0;

    for(int i = 0; i < k; i++) {
      x += n;
    }

    for(int i = 0; i < x.size(); i++) {
      cout<<x[i]<<endl;
      result = result + x[i] - '0';
    }
    cout<<result<<endl;



  return 0;
}
