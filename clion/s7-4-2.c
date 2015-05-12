//
// Created by 石塚隆一 on 15/05/12.
//

#include <stdio.h>

int main(void)
{
  char color[3][16] = {"red", "orange", "greenish yellow"};

  char *color_p[3] = {"red", "orange", "greenish yellow"};

  int i;

  for (i = 0; i < 3; i++) {
    printf("[%s] ", color[i]);
  }

  printf("\n");

  for (i = 0; i < 3; i++) {
    printf("[%s] ", color_p[i]);
  }

  return 0;
}
