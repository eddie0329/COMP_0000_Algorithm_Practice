#include "cpp_all_headers.hpp"

using namespace std;

void printPicked(vector<int>& picked) {
  for (int i : picked) {
    cout << i << " ";
  }
  cout << endl;
}

void pick(int n, vector<int>& picked, int toPick) {

  if (toPick == 0) {printPicked(picked); return ; }

  int smallest = picked.empty() ? 0 : picked.back() + 1;

  for (int next = smallest; next < n; ++next) {
    picked.push_back(next);
    pick(n, picked, toPick - 1);
    picked.pop_back();
  }
}

int main() {

  vector<int> picked;

  pick(4, picked, 3);

  return 0;
}
