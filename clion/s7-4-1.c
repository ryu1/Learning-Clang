//
// Created by 石塚隆一 on 15/05/12.
//

/* 配列と文字列定数にアクセスする */

#include <stdio.h>

int main(void)
{
  char str[] = "Arrays";
  char *p = str;

  char *s = "String";

  printf("配列のアドレス = %p\n", p);

  printf("文字列定数のアドレス = %p\n", s);

  while (*p != '\0') {
    printf("%c", *p);
    p++;
  }
  printf("\n");

  while (*s != '\0') {
    printf("%c", *s);
    s++;
  }

  return 0;
}
