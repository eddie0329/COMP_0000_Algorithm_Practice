#include "cpp_all_headers.hpp"
using namespace std;


int *merge_sort(int *array, int start, int end) {
  //divide until non-dividalbe
  if(start < end) {
    int mid = (start + end) / 2;
    merge_sort(array, start, mid);
    merge_sort(array, mid +1, end);
  }
  //merge with sorting

  //return sorted array
  return array;

}

// void merge(int *array_1, int *array_2, int *array_merged) {
//   for(int i = 0; i < sizeof(array_1) / sizeof(int); i++) {
//     array_merged[i] = array_1[i];
//     array_merged[i+2] = array_2[i];
//   }
// }

int main() {
  int array[4] = {3, 1, 2, 4};

  merge_sort(array, 0, 3);

  for(int i = 0; i < 4; i++) {
    cout<<array[i]<<endl;
  }
  return 0;
}
