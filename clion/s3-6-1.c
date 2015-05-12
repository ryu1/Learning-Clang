//
// Created by 石塚隆一 on 15/04/23.
//

/* 変数指定の例 */

#include <stdio.h>

int main(void)
{
  int a = 65;

  printf("変数aを10進数として表示します。:%d\n", a);

  printf("変数aを16進数として表示します。:%x\n", a);

  printf("変数aを8進数として表示します。:%o\n", a);

  printf("まとめて表示します。\n");

  printf("10進:%d 16進:%x 8進:%o\n", a, a, a);

  return 0;
}
