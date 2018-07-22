#include <iostream>
#include <vector>
using namespace std;

void countSwaps(vector<int>a) {
  int tmp, t;
  int number = 0;
  for(int i = 0; i < a.size(); i++) {
    for(int j = 0; j < a.size()-1; j++){
      if(a[j] > a[j+1]) {
        tmp = a[j+1];
        a[j+1] = a[j];
        a[j] = tmp;
        number++;
      }
    }
  }
  for(int i = 0; i < a.size(); i++){
    cout<<a[i]<<endl;
  }
  cout<<number<<endl;
  cout<<"first element:"<<a.front()<<endl;
  cout<<a[a.size()-1]<<endl;

}

int main() {
  vector<int> a;

  a.push_back(3);
  a.push_back(1);
  a.push_back(2);

  for(int i = 0; i < a.size(); i++) {
    cout<<a[i]<<endl;
  }
  countSwaps(a);

  return 0;

}
