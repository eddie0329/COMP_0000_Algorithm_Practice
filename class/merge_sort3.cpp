#include "cpp_all_headers.hpp"
using namespace std;

int *merge_sort(int *array, int start, int end) {
  //defining the variables
  int t, k, count = 0;

  //divding the array
  int b[2];
  int c[2];

  //puting the variables into array b and c
  for(int i = 0; i < 4; i++) {
    b[i] = array[i];
    c[i - 2] = array[i];
  }

  //sorting and conquer
  while(t != 2 && k != 2) {
    if(b[t] < c[k]) {
      array[count] = b[t];
      count++;
      t++;
    }

    if(b[t] > c[k]) {
      array[count] = c[k];
      count++;
      k++;
    }

  }

  return array;
}

int main() {
  int a[4] = {1, 4, 2, 3};

  merge_sort(a, 0, 3);

  for(int i = 0; i < 4; i++) {
    cout<<a[i];
  }
  cout<<endl;
}
