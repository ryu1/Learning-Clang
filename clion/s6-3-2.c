//
// Created by 石塚隆一 on 15/05/12.
//

/* 大文字を小文字に変換するプログラム */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int c;

  printf("英文字を入力してください。(修了条件: Ctrl+Z)\n");

  while ((c = getchar()) != EOF) {
    if (c == '\n') continue;
    c = tolower(c);
    printf("小文字変換 = %c\n", c);
  }

  return 0;
}