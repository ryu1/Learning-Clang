//
// Created by 石塚隆一 on 15/04/24.
//

/* 入力した整数を演算するプログラム */

#include <stdio.h>

int main(void)
{
  int a, b;

  printf("整数値を2個入力してください。\n");

  printf("> ");
  scanf("%d", &a);

  printf("> ");
  scanf("%d", &b);

  printf("加算の結果 = %d\n", a + b);
  printf("減算の結果 = %d\n", a - b);
  printf("乗算の結果 = %d\n", a * b);
  if (b != 0) {
    printf("乗算の結果 = %d\n", a / b);
    printf("剰余算の結果 = %d\n", a % b);
  }
  else {
    printf("0 で割り算はできません。\n");
  }
  return 0;
}
