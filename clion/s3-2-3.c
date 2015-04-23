//
// Created by 石塚隆一 on 15/04/23.
//

/* 初期化漏れのよるエラーのプログラム */

#include <stdio.h>

int main(void)
{

  int sum1, sum2, a = 100, b = 100;

  sum1 = a + b;

  sum2 = sum2 + sum1;

  printf("sum1 = %d\n", sum1);
  printf("sum2 = %d\n", sum2);

  return 0;
}