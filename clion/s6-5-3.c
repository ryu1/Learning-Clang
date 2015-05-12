//
// Created by 石塚隆一 on 15/05/12.
//

/* 1 〜 10の擬似乱数を表示するプログラム(修正版) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i;

  srand((unsigned)time(NULL));

  for (i = 0; i <= 10; ++i) {
    printf("%d ", rand() % 10 + 1) ;
  }

  return 0;
}
