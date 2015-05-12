//
// Created by 石塚隆一 on 15/05/05.
//
/* いろいろな文字列の長さを求めるプログラム */

#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[] = "Spring Sell";
  char str2[] = "\0Summer Vacation";
  char str3[] = "Automn\tDay";
  char str4[] = "Winter" "Sports";

  printf("str1: \"%s\" %d文字\n", str1, strlen(str1));
  printf("str1: \"%s\" %d文字\n", str2, strlen(str2));
  printf("str1: \"%s\" %d文字\n", str3, strlen(str3));
  printf("str1: \"%s\" %d文字\n", str4, strlen(str4));

  return 0;
}
