//
// Created by 石塚隆一 on 15/05/21.
//

#include <stdio.h>
#define N 10

int get_sum(int array[], int n);

int main(void)
{
  int ten[N] = {56, 89, 66, 37, 98, 77, 62, 82, 50, 71};
  int sum;

  sum = get_sum(ten, N);
  printf("合計点は%d点です。\n", sum);

  return 0;

}

int get_sum(int array[], int n)
{
  int i, sum = 0;

  for (i = 0; i < n; i++) {
    sum += array[i];
  }

  return sum;
}
