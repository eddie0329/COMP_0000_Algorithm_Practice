#include <iostream>
#include <vector>
using namespace std;


vector<int> rot_left(vector<int> v, int b) {


}


int main() {
  vector<int> v;
  int b = 3;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  for(int i = b; i < v.size(); i++) {
    cout<<v[i]<<endl;
  }
  for(int j = 0; j < b; j ++) {
    cout<<v[j]<<endl;

  }

}
