#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


int main() {
    string n = "123";
    int k = 3;
    string x = "";
    int result = 0;
    int result_2 = 0;
    stringstream s;

    for(int i = 0; i < k; i++) {
      x += n;
    }



    for(int i = 0; i < x.size(); i++) {
      result = result + x[i] - '0';
      }
    s<<result;
    x = "";
    x = s.str();
    result = 0;
    //cout<<result<<endl;



    for(int i = 0; i < x.size(); i++) {
      result = result + x[i] - '0';
      }
    s<<result;
    x = "";
    x = s.str();
    result = 0;

    for(int i = 0; i < x.size(); i++) {
      cout<<x[i]<<endl;
    }

    //cout<<x.size()<<endl;
    for(int i = 0; i < x.size(); i++) {
      //cout<<x[i]<<endl;
    }

    for(int i = 0; i < x.size(); i++) {
      result_2 = result + x[i] - '0';
    }
    //cout<<result_2<<endl;

  return 0;
}
