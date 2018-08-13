#include "cpp_all_headers.hpp"
using namespace std;


//function breath_search
void breath_search(vector<int> tree[], int element_to_search) {
  for(int i = 1; i < 8; i ++) {
    cout<<"Breath_search :"<<tree[i][0]<<endl;
    if(tree[i][0] == element_to_search) {
      break;
    }
  }
}

//function depth_search
void depth_search(vector<int> tree[], int element_to_search) {
//checking element_to_search = 1
  if(tree[1][0] == element_to_search) {
    cout<<"Depth_search :"<<tree[1][0]<<endl;
  }

//else element_to_search = 2 ~ 7
  else{
    for(int i = 2; i < 4; i++) {
      for(int j = 0; j < 3; j++) {
        cout<<"Depth_search :"<<tree[i][j]<<endl;
        if(tree[i][j] == element_to_search) {
          break;
        }
      }
    }
  }

}

//1 - 1 2 3
//2 - 2 4 5
//3 - 3 6 7
//4 - 4
//5 - 5
//6 - 6
//7 - 7
int main() {
  vector<int> tree[8];

  tree[1].push_back(1);
  tree[2].push_back(2);
  tree[3].push_back(3);
  tree[4].push_back(4);
  tree[5].push_back(5);
  tree[6].push_back(6);
  tree[7].push_back(7);
  tree[1].push_back(2);
  tree[1].push_back(3);
  tree[2].push_back(4);
  tree[2].push_back(5);
  tree[3].push_back(6);
  tree[3].push_back(7);


  breath_search(tree, 6);
  depth_search(tree, 6);

}
