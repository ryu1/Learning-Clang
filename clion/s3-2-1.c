//
// Created by 石塚隆一 on 15/04/23.
//
/* 変数の大きさを確認するプログラム */
#include <stdio.h>

int main(void)
{
  //printf("変数の大きさを調べます。\n");

  int i;
  char ch;
  double x;

  printf("変数の大きさを調べます。\n");

  printf("int型の変数iは%dバイトです。\n", sizeof(i));
  printf("char型の変数chは%dバイトです。\n", sizeof(ch));
  printf("double型の変数xは%dバイトです。\n", sizeof(x));

  return 0;

}
