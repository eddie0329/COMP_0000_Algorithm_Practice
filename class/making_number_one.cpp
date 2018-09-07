#include "cpp_all_headers.hpp"
using namespace std;

int making_number_one(int number) {
  int flag = 0;
  while(number != 1) {
    if((number - 1) % 3 == 0) {
      number = (number - 1) / 3;
      flag = flag + 2;
    }
    else if(number % 3 == 0) {
      number = number / 3;
      flag++;
    }
    else if(number % 2 == 0) {
      number = number / 2;
      flag++;
    }
    else if(number % 3 != 0 && number %2 != 0) {
      number = number - 1;
      flag++;
    }
  }
  cout<<"In order to make 1 need "<<flag<<" process(es)"<<endl;
  return flag;
}

int main() {
  int number;
  cin>>number;

  making_number_one(number);

  return 0;
}
