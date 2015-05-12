//
// Created by 石塚隆一 on 15/05/05.
//

/* 文字列の入出力を繰り返すプログラム */

#include <stdio.h>

int main(void)
{
  char str[256];

  while (gets(str) != NULL) {
    puts(str);
  }

  return 0;
}