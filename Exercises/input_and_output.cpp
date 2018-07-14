#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int input;
  vector<int> v;

  for(int j = 0; j < 4; ++j){
    std::cin>>input;
    v.push_back(input);
  }

  for(int i = 0; i != v.size(); ++i) {
    std::cout<<v[i]<<endl;
    //std::cout<<v.at(i)<<endl;
  }
  return 0;
}
