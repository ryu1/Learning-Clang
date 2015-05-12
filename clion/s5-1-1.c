//
// Created by 石塚隆一 on 15/04/24.
//
#include <stdio.h>

int main(void)
{
  int ten;

  printf("点数を入力してください。＞ ");
  scanf("%d", &ten);

  if (ten >= 60) {
    printf("合格です。\n");
  }

  return 0;
}
