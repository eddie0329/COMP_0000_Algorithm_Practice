#include <stdio.h>

int main() {
  int array[10] = {45, 20, 35, 10, 55, 60, 90, 85, 25, 75};
  int max= 0;
  int i;

  for(i = 0; i < 10; ++i) {
    if(array[i] > max) {
      max = array[i];
    }
  }
  printf("%d\n", max);
}
