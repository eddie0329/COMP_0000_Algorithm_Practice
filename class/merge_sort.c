#include <stdio.h>

int main() {
  int array[4] = {};
  int array_1[2] = {1, 2};
  int array_2[2] = {3, 4};

  array = array_1 + array_2;

  return 0;
}
