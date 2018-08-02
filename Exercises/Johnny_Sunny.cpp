#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(2);
  int expense = 4;

  for(int i = 0; i < 4; ++i) {
    for(int j = 0; j < 4; ++j) {
      if(a[i]+a[j] == expense && a[i] != a[j]  && a[i] <= a[j]) {
        cout<<a[i]<<a[j]<<endl;
      }
    }
  }


}
