#include <stdio.h>

int swap(int a, int b) {
    int tmp =0;
    //printf("%d,%d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    //printf("%d,%d\n", a, b);
    return a, b;
}

int main() {
  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  int i;
  int tmp;
  int j;
  int index;


  // for(i = 0; i < 10; ++i) {
  //   int min = 999;
  //   for(j = i; j < 10; ++j) {
  //     if(min > array[j]) {
  //       min = array[j];
  //       index = j;
  //     }
  //   }
  //   tmp = array[i];
  //   array[i] = array[index];
  //   array[index] = tmp;
  // }

  for(i = 0; i < 10 ; i++) {
      int min = 999;
      for(j = i; j < 10; j++) {
        if(min > array[j]) {
          min = array[j];
          index = j;
        }
      }
      tmp = array[i];
      array[i] = array[index];
      array[index] = tmp;
  }

  for(i = 0; i < 10; ++i) {
    printf("%d\n", array[i]);
  }





  return 0;
}
