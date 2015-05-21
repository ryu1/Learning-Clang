//
// Created by 石塚隆一 on 15/05/21.
//
/* 配列の偶数地だけ表示するプログラム */
#include <stdio.h>
#define N 10

int even_number(int *p, int n, int *e);

int main(void)
{
  int array[N] = {56, 89, 66, 37, 98, 77, 62, 82, 50, 71};

  int even[N], i, n;

  n = even_number(array, N, even);

  printf("偶数 = ");
  for (i = 0; i < n; i++) {
    printf("%d ", even[i]);
  }

  printf("\n");

  return 0;
}

/*** 偶数を配列に格納しその数を返却 ***/
/*
 * (仮引数) *p: 元の配列のポインタ n: 要素数
 *         *e: 偶数を格納する配列のポインタ
 * (返却値) 偶数値の数
 */
int even_number(int *p, int n, int *e)
{
  int i, j;

  for (i = 0, j = 0; i < n; i++) {
    if (*(p + i) % 2 == 0) {
      *(e + j) = *(p + i);
      j++;
    }
  }

  return j;

}
