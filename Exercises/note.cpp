#include <iostream>
#include <string>
#include <vector>


using namespace std;


void breath_search(char tree[5][7], char element_to_search) {
  for(int col = 1; col < 6; col++) {
    for(int row = 1; row < 8; row++) {
      if(col == 1 && row == 4) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col == 3 && row == 2) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col == 3 && row ==6) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col == 5 && row ==1) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col ==5 && row == 3) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col ==5 && row == 5) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
      else if(col ==5 && row == 7) {
        tree[col][row] = '0';
        if(tree[col][row] == element_to_search) {
          break;
        }
      }
    }
  }
}

void depth_search(int element_to_search) {

}

int main() {
  char tree[5][7] = {{' ', ' ', ' ', '1', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', '2', ' ', ' ', ' ', '3', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', '5', ' ', '6', ' ', '7'}};

  breath_search(tree, '3');

  for(int col = 0; col < 5; col++) {
    for(int row = 0; row < 7; row++) {
      cout<<tree[col][row];
    }
    cout<<endl;
  }
}
