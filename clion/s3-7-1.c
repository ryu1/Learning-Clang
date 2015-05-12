//
// Created by 石塚隆一 on 15/04/24.
//

/* 「A」を入力するプログラム */

#include <stdio.h>

int main(void)
{
  char c;

  int n;

  printf("AキーとEnterキーを入力してください。＞ ");

  scanf("%c", &c);

  printf("入力データを10進数表示 :%d\n", c);

  printf("\nAキーとEnterキーを押してください。＞ ");

  scanf("%x", &n);

  printf("入力データを10新数表示 :%d\n", n);

  return 0;


}