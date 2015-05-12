//
// Created by 石塚隆一 on 15/05/12.
//

/* ポインタを使用するプログラム */

#include <stdio.h>

int main(void)
{
  int a = 123;

  int *p;

  p = &a;

  printf("a = %d\n", a);
  printf("*p = %d\n", *p);

  *p = 456;

  printf("a = %d\n", a);
  printf("*p = %d\n", *p);

  return 0;
}

