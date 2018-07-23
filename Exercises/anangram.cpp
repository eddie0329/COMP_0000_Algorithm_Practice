#include <iostream>
using namespace std;


int main() {
  char a[3] = {'a', 'b', 'c'};
  char b[3] = {'d', 'c', 'f'};
  char c[3] = { };
  int index, tmp, a_number, b_number;

  //selection_sorting a[]
  for(int i = 0; i < 3; i++) {
    int min = 999;
    for(int j = i; j < 3; j++) {
      if (min > a[j]){
      min = a[j];
      index = j;
      }
    }
    tmp = a[i];
    a[i] = a[index];
    a[index] = tmp;
  }

  //selection_sorting b[]
  for(int i = 0; i < 3; i++) {
    int min = 999;
    for(int j = i; j < 3; j++) {
      if (min > b[j]){
      min = b[j];
      index = j;
      }
    }
    tmp = b[i];
    b[i] = b[index];
    b[index] = tmp;
  }

  //length of a
  while(a != '\0') {
    a_number++;
  }
  while(b != '\0') {
    b_number++;
  }

  //print_a[]
  for(int i = 0; i < a_number; i++) {
    cout<<a[i];
  }
  cout<<endl;
  //print_b[]
  for(int i = 0; i < b_number; i++) {
    cout<<b[i];
  }
  cout<<endl;

  //anagram
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
      if(a[i] == b[j]) {
        c[i] = b[j];
      }
    }
  }
  //printing anagram
  for(int i = 0; i < 3; i++) {
    cout<<c[i]<<endl;
  }
}
