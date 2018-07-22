#include <stdio.h>

int main (){
  int index, i, j, tmp, z;
  int array[10] = {10, 1, 3, 2, 6, 5, 8, 9, 4, 7};

  for(i = 0; i < 10; i++) {
    for(j = 0; j < 9 - i; j ++){
      if(array[j] > array[j+1]) {
        tmp = array[j+1];
        array[j+1] = array[j];
        array[j] = tmp;
      }
    }
  }




  for(i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
