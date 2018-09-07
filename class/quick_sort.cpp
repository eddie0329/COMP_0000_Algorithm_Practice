#include "cpp_all_headers.hpp"
using namespace std;

// void quick_sort(int *array, int pivot) {
//   // defining the pivot
//   for(int i = 0; i < 5; i++) {
//     if(array[i] < array[pivot]) {
//       array[i] = array[]
//     }
//     if(array[i] > array[pivot]) {
//
//     }
//   }
//   // if array[i] < array[pivot] then array[i] goes left-side
//
//   // if array[i] > array[pivot] then array[i] goes right -side
//
// }

int main() {
  vector<int> array; // 4 3 2 1 5
  array.push_back(4);
  array.push_back(3);
  array.push_back(2);
  array.push_back(1);
  array.push_back(5);

  array.pop_back();
  array.pop_back();
  array.pop_back();


  for(int i = 0; i < array.size(); i++) {
    cout<<array[i]<<endl;
  }
  return 0;
}
