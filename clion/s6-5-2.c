//
// Created by 石塚隆一 on 15/05/12.
//

/* 1 〜 10の擬似乱数を表示するプログラム */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;

  for (i = 0; i <= 10; ++i) {
   printf("%d ", rand() % 10 + 1) ;
  }

  return 0;
}
