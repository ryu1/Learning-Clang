//
// Created by 石塚隆一 on 15/05/12.
//

#include <stdio.h>

/* 文字列を1文字ずつ表示するプログラム */

int main(void)
{
  char str[] = "sun";

  char *p;

  p = str;

  while (*p != '\0') {
    printf("%c ", *p);
    p++;
  }

  return 0;
}
