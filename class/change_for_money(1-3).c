#include <stdio.h>

int main() {
  int total_money;
  scanf("%d", &total_money);

  //number of exchange 500won
  int exchange_500 = total_money / 500;
  printf("500:%d\n", exchange_500);
  total_money = total_money - (500 * exchange_500);

  //number of exchange 100won
  int exchange_100 = total_money / 100;
  printf("100:%d\n", exchange_100);
  total_money = total_money - (100 * exchange_100);

  //number of exchange 50won
  int exchange_50 = total_money / 50;
  printf("50:%d\n", exchange_50);
  total_money = total_money - (50 * exchange_50);

  //number of exchange 10won
  int exchange_10 = total_money / 10;
  printf("10:%d\n", exchange_10);

  return 0;
}
