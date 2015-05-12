//
// Created by 石塚隆一 on 15/05/12.
//

#include <stdio.h>

int main(void)
{
  char color[3][16] = {"red", "orange", "greenish yellow"};

  char *color_p[3] = {"red", "orange", "greenish yellow"};

  int i, j;

  for (i = 0; i < 3; i++) {
    printf("[");
    for (j = 0; color[i][j] != '\0'; j++) {
      printf("%c", color[i][j]);
    }
    printf("] ");
  }

  printf("\n");

  for(i = 0; i < 3; i++) {
    printf("[");
    for (int j = 0; *(color_p[i] + j) != '\0'; ++j) {
      printf("%c", *(color_p[i] + j));
    }
    printf("] ");
  }
  return 0;
}
