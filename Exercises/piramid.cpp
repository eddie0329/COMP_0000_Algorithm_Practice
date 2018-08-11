#include <iostream>
#include <vector>
#include <string>
using namespace std;

void make_tree() {
  for(int col = 1; col < 6; col++) {
    for(int row = 1; row < 8; row++) {
      cout<<" ";
      if(col == 1 && row == 4) {
        cout<<"'1'";
      }
      else if(col == 3 && row == 2) {
        cout<<"2";
      }
      else if(col == 3 && row ==6) {
        cout<<"3";
      }
      else if(col == 5 && row ==1) {
        cout<<"4";
      }
      else if(col ==5 && row == 3) {
        cout<<"5";
      }
      else if(col ==5 && row == 5) {
        cout<<"6";
      }
      else if(col ==5 && row == 7) {
        cout<<"7";
      }
    }
    cout<<endl;
  }
}

void breath_search(int element_to_search) {
  make_tree();

}
void depth_search(int element_to_search) {

}

int main() {
  make_tree();
}
