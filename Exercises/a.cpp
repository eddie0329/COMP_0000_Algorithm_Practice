#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
  int tree[5][7];
  for(int col = 1; col < 6; col++) {
    for(int row = 1; row < 8; row++) {
      tree[col][row] = {0};
      cout<<tree[col][row];
      if(col == 1 && row == 4) {
        tree[col][row] = {1};
      }
      else if(col == 3 && row == 2) {
        tree[col][row] = {2};
      }
      else if(col == 3 && row ==6) {
        tree[col][row] = {3};
      }
      else if(col == 5 && row ==1) {
        tree[col][row] = {4};
      }
      else if(col ==5 && row == 3) {
        tree[col][row] = {5};
      }
      else if(col ==5 && row == 5) {
        tree[col][row] = {6};
      }
      else if(col ==5 && row == 7) {
        tree[col][row] = {7};
      }
    }
  }
}
