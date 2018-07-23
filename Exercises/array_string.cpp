#include <iostream>
#include <string>
using namespace std;

int main() {
  char a[3] = {'a', 'b', 'c'};
  int number = 0;
  int i = 0;

  // while(a[i] != '\0') {
  //   number++;
  //   i++;
  // }

  for(i = 0; i < 4; i++) {
    if(a[i] != '\0'){
      number++;
    }
    cout<<a[i]<<endl;
    cout<<number<<endl;
  }
  return 0;
}
