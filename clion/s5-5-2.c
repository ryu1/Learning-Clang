//
// Created by 石塚隆一 on 15/04/26.
//

#include <stdio.h>

int main(void)
{
  char str1[] = "tomato", str2[10];
  int i = 0;

  do {
    str2[i] = str1[i];

  } while (str1[i++] != '\0');
  printf("str2 = %s\n", str2);

  return 0;
}
