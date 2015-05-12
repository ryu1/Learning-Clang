//
// Created by 石塚隆一 on 15/04/24.
//

/* インクリメント演算子の使用例 */

#include <stdio.h>

int main(void)
{
  int a, n;

  n = 2;

  a = ++n;

  printf("前置演算 : n = %d a = %d\n", n, a);

  n = 2;

  a = n++;

  printf("後置演算 : n = %d a = %d\n", n, a);

  return 0;
}
