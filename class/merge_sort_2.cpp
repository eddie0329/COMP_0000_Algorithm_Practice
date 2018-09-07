#include "cpp_all_headers.hpp"
using namespace std;


int main() {
  vector<int> v1; // 3, 1
  vector<int> v2; // 2, 4
  int tmp = 0;

  v1.push_back(3);
  v1.push_back(1);
  v2.push_back(2);
  v2.push_back(4);

  //sorting v1 -> 1, 3
  for(int i = 0; i < v1.size(); i++) {
    for(int j = 0; j < v1.size(); j++) {
      if(v1[i] < v1[j]) {
        tmp = v1[i];
        v1[i] = v1[j];
        v1[j] = tmp;
      }
    }
  }

  //sorting v2 -> 2, 4
  for(int i = 0; i < v2.size(); i++) {
    for(int j = 0; j < v2.size(); j++) {
      if(v2[i] < v2[j]) {
        int tmp = v2[i];
        v2[i] = v2[j];
        v2[j] = tmp;
      }
    }
  }

  //merge sort -> v1 = 1, 2, 3, 4
  for(int i = 0; i < v1.size(); i++) {
    if(v1[i] < v2[i]) {
      v1.push_back(v1[i]);
    }
    if(v1)
  }

  //printing the v1
  for(int i = 0; i < v1.size(); i++) {
    cout<<v1[i];
  }
  cout<<endl;


  return 0;
}
