#include <iostream>
#include <vector>
using namespace std;

int main() {
  int array[3] = {1, 2, 3};
  int* p_v = array;
  cout<<p_v<<endl;
  cout<<*(p_v+1)<<endl;
  return 0;

}
