#include "cpp_all_headers.hpp"
using namespace std;

void quick_sort(int *array, int pivot) {
  int tmp;
  // defining the pivot
  for(int i = 0; i < 5; i++) {
    if(array[i] < pivot) {
      tmp = array[i];
      array[i] = array[pivot];
      array[pivot] = tmp;
    }
    if(array[i] > pivot) {

    }
  }
  // if array[i] < array[pivot] then array[i] goes left-side

  // if array[i] > array[pivot] then array[i] goes right -side

}

int main() {
  int array[5] = {4, 3, 2, 5 , 1};

  return 0;
}
