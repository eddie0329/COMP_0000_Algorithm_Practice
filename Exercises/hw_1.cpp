#include <iostream>
using namespace std;

int main() {
  int array[15] = {};

  for(int i = 1; i < 16; i++) {
    array[i] = i;
    if(i%3 == 0 && i%5 == 0) {
      cout<<"fizz buzz"<<endl;
    }
    else if(i%3 == 0) {
      cout<<"fizz"<<endl;
    }
    else if(i%5 == 0) {
      cout<<"buzz"<<endl;
    }
    else {
      cout<<array[i]<<endl;
    }
  }
  return 0;
}
