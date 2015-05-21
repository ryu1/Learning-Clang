//
// Created by 石塚隆一 on 15/05/21.
//
/* 2値を入れ替えるプログラム */
#include <stdio.h>

void swap(int *p1, int *p2);

int main(void)
{
  int x = 10, y = 20;

  printf("入れ替え前 x = %d y = %d\n", x, y);

  swap(&x, &y);

  printf("入れ替え後 x = %d y = %d\n", x, y);

  return 0;
}

/*** 2値を交換する ***/
void swap(int *p1, int *p2)
{
  int temp;

  /* *p1の指す値と*p2の指す値を交換する */
  temp = *p1;

  *p1 = *p2;

  *p2 = temp;
}
