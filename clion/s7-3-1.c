//
// Created by 石塚隆一 on 15/05/12.
//

/* 文字列を1文字ずつ表示するプログラム */

#include <stdio.h>

int main(void) {
  char str[] = "sun";

  char *p;

  int i = 0;

  p = str;

  while (*(p + i) != '\0') {
    printf("%c ", *(p + i));
    i++;
  }
  return 0;
}
