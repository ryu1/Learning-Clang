//
// Created by 石塚隆一 on 15/04/23.
//

#include <stdio.h>
#define LENGTH 5

int main(void)
{
  int i, j;
  for (i = 1; i <= LENGTH; i++) {
    for (j = 1; j <= LENGTH; j++) {
      printf("■");
    }
    printf("\n");
  }
}