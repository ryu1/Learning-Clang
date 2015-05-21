//
// Created by 石塚隆一 on 15/05/14.
//

#include <stdio.h>

int is_leap_year(int y);

int  main(void)
{
  int year;

  printf("西暦を入力してください。> ");
  scanf("%d", &year);

  /* 閏年の判定 */
  if (is_leap_year(year) == 1) {
    printf("%d年はうるう年です。\n", year);
  } else {
    printf("%d年はうるう年ではありません。\n", year);
  }

  return 0;
}

int is_leap_year(int y)
{
  int rc = 0;

  if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    rc = 1;
  }

  return rc;

}