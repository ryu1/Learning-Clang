//
// Created by 石塚隆一 on 15/05/12.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;

  char s[20];

  do {
    printf("> ");
    scanf("%19s", s);

    n = atoi(s);

    printf("%dが入力されました。\n", n);
  } while (n >= 0);

  return 0;
}
