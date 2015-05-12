//
// Created by 石塚隆一 on 15/04/24.
//
/* 関係演算子を確認するプログラム */
#include <stdio.h>

int main(void)
{
  int a, b;

  printf("整数値を2個入力してください。\n");
  printf("a > ");
  scanf("%d", &a);
  printf("b > ");
  scanf("%d", &b);

  printf("a > bの演算結果は%dです。\n", a > b);
  printf("a >= bの演算結果は%dです。\n", a >= b);
  printf("a < bの演算結果は%dです。\n", a < b);
  printf("a <= bの演算結果は%dです。\n", a <= b);
  printf("a == bの演算結果は%dです。\n", a == b);
  printf("a != bの演算結果は%dです。\n", a != b);

  return 0;
}
