//
// Created by 石塚隆一 on 15/04/26.
//

#include <stdio.h>

int main(void)
{
  char str[3][8] = {"cabbage", "carrot", "onion"};
  int i, n;

  for (i = 0; i < 3; i++) {

    n = 0;

    while (str[i][n] != '\0') {
      printf("%c ", str[i][n]);
      n++;
    }
    printf("\n");
  }
  return 0;
}
