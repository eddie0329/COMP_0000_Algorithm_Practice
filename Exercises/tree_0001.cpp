#include "cpp_all_headers.hpp"

using namespace std;

//       1
//    2     3
//   4 5   6 7
int graph[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 1, 0, 0, 0, 0},
  {0, 1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 1},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
};

void print_array() {

  for (int i = 1; i < 8; ++i) {
    for (int j = 1; j < 8; ++j) {
      cout << graph[i][j];
    }
    cout << endl;
  }
}

bool is_explored(vector<int> &explored, int element_to_search) {
  for (auto i : explored) {
    if (i == element_to_search) {
      return true;
    }
  }
  return false;
}

void breadth_first_search() {
  queue<int> q;

  vector<int> explored;

  q.push(1);

  while(!q.empty()) {
    int node = q.front();
    q.pop();

    cout << node << endl;
    explored.push_back(node);

    for (int i = 1; i < 8; ++i) {
      if (graph[node][i] == 1) {
        if (!is_explored(explored, i)) {
          q.push(i);
        }
      }
    }

  }

}

int main() {
  breadth_first_search();

  return 0;
}
