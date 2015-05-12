//
// Created by 石塚隆一 on 15/05/05.
//

/* 文字の入出力を繰り返すプログラム */

#include <stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  return 0;
}
