//
// Created by 石塚隆一 on 15/05/12.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[20];
  char str2[20];

  printf("文字列を2つ入力してください。\n");
  scanf("%19s%19s", str1, str2);

  if (strcmp(str1, str2) == 0) {
    printf("2つの文字列は等しいです。\n");
  }
  else {
    printf("2つの文字列は等しくありません。\n");
  }
  return 0;
}
