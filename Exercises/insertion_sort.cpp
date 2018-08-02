#include <iostream>
using namespace std;

int main() {
  int array[10] = {1, 10, 5, 2, 3, 6, 4, 8, 9, 7};
  int tmp;

  for(int i = 0; i < 9; i++) {
    j = i;
    while(array[j] > array[i]) {
      tmp = array[j];
      array[j] = array[i];
      array[i] = tmp;
      j--;
    }
  }

}
