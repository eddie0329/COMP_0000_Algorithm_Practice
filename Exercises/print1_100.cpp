#include <iostream>
using namespace std;

int main() {
  int array[100] = {};

  for(int i = 1; i < 101; i++) {
    array[i] = i;
    if(i%3 == 0 && i%5 == 0) {
      cout<<"Fizz Buzz"<<endl;
    }
    else if(i%3 == 0) {
      cout<<"Fizz"<<endl;
    }
    else if(i%5 == 0) {
      cout<<"Buzz"<<endl;
    }
    else {
      cout<<array[i]<<endl;
    }
  }
  return 0;
}
