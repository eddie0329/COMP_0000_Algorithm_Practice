#include <iostream>
using namespace std;

int main() {
  int array[3] =  {'z', 'Z', 3};

  for(int i = 0; i < 3; i++) {
    if(array[i] > 65) {
      array[i] = array[i] - 13;
      cout<<(char)array[i]<<endl;
    }
    else {
      cout<<array[i]<<endl;
    }
  }
  return 0;

}
