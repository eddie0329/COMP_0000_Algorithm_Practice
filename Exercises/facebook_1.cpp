#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <int> a;

  a.push_back(1);
  a.push_back(2);

  cout<<"{ }"<<endl;
  for(int i = 0; i < a.size(); ++i) {
    cout<<"{"<<a[i]<<"}"<<endl;
  }
  for(int j = 0; j < a.size(); ++j) {
    for(int z = j + 1; z < a.size(); ++z) {
      if(a[j] <= a[z] ){
        cout<<"{"<<a[j]<<","<<a[z]<<"}"<<endl;

      }
    }
  }

  return 0;
}
