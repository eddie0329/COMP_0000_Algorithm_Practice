#include "cpp_all_headers.hpp"
using namespace std;




// void happy_number(string number) {
//   int result = 0;
//   if(flag < 6) {
//     if(result == 1) {
//       cout<<number<<"is happy_number"<<endl;
//     }
//     for(int i = 0; i < number.size(); i++) {
//       result = (number[i] - '0') * (number[i] - '0');
//       flag++;
//       number = to_string(result);
//     }
//     happy_number(number);
//   }
//   if(flag > 5) {
//     cout<<number<<" is not a happy_number"<<endl;
//   }
// }

void happy_number(string number) {
  int flag = 0;
  string tmp = number;
  while(flag < 5) {
    if(tmp == "1") {
      cout<<number<<" is happy_number"<<endl;
      break;
    }
    int result = 0;
    for(int i = 0; i < tmp.size(); i++) {
      result = result + (tmp[i] - '0') * (tmp[i] - '0');
    }
    flag++;
    tmp = to_string(result);
    if(tmp != "1" && flag > 4) {
      cout<<number<<" is not a happy_number"<<endl;
    }
  }
}

int main() {

  string number = "";
  cin>>number;


  happy_number(number);



  return 0;
}
