#include <iostream>
#include <string>
#include <vector>

using namespace std;

void move(vector<int> first, vector<int> second, int a) {
  for(int i = 0; i < first.size(); i++) {
    if(first[i] == a) {
      second[i] = first[i];
    }
  }

}

int main() {
  vector<int> first;
  vector<int> second;

  for(int i = 1; i < 5; i++) {
    first.push_back(i);
  }

  move(first, second, 1);
  cout<<second[0]<<endl;

}
