//
// Created by 石塚隆一 on 15/04/26.
//

/* 入力値を加算するプログラム */

#include <stdio.h>

int main(void)
{
  int n, sum = 0;

  printf("整数値を入力してください(終了条件:負の整数)\n");
  printf("> ");
  scanf("%d", &n);

  while (n >= 0) {
    sum += n;
    printf("合計 = %d\n", sum);
    printf("> ");
    scanf("%d", &n);
  }

  return 0;
}
