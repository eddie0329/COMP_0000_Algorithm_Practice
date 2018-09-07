#include <stdio.h>

// int main() {
//   int array[9] = {45, 20, 60, 10, 55, 90, 85, 75, 25};
//   int to_find, i;
//   printf("which number do u want to find?");
//   scanf("%d", &to_find);
//
//   for(i = 0; i < 10; i++) {
//     if(array[i] == to_find) {
//       printf("%d\n", array[i]);
//       break;
//     }
//   }
//   printf("the number you want to find is not in this array \n");
//
//   return 0;
// }

int main() {
  //defining the array and others
  int array[9] = {45, 20, 60, 10, 55, 90, 85, 75, 25};
  int array_1[5] = {};
  int array_2[5] = {};
  int i, j, tmp;
  int number_to_find = 85;

  //sorting the array -> 10 20 25 45 55 60 75 85 90
  for(i = 0; i < 9; i++) {
    for(j = 0; j < 9; j++) {
      if(array[i] < array[j]) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }

  //checking the sorting system is working rightly
  for(i = 0; i < 9; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  //dividing the array into half
  //division 1 -> 10 20 25 45
  for(i = 0; i < 4; i++) {
    array_1[i] = array[i];
    printf("%d ", array_1[i]);
  }
  printf("\n");

  //division 2 -> 55 60 75 85 90
  for(i = 4; i < 9; i++) {
    array_2[i] = array[i];
    printf("%d ", array_2[i]);
  }
  printf("\n");

  //selecting the divsion & finding the number
  if(number_to_find <= array_1[3]) {
    for(i = 0; i < 4; i++) {
      if(array_1[i] == number_to_find) {
        printf("Found number at division 1\n");
      }
    }
  }

  if(number_to_find >= array_2[0]) {
    for(i = 4; i < 9; i++) {
      if(array_2[i] == number_to_find) {
        printf("Found number at division 2\n");
      }
    }
  }




  return 0;
}
