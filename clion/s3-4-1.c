//
// Created by 石塚隆一 on 15/04/23.
//

/* 各学生のテストの合計点を求めるプログラム */

#include <stdio.h>

int main(void)
{
  /* テストの点数 国語 数学 英語 */

  int ten[][3] = {
      {89, 65, 65},
      {67, 88, 81},
      {61, 45, 55},
      {72, 95, 91}
  };

  int sum[4];

  /* 各学生の合計点を求める */
  sum[0] = ten[0][0] + ten[0][1] + ten[0][2];
  sum[1] = ten[1][0] + ten[1][1] + ten[1][2];
  sum[2] = ten[2][0] + ten[2][1] + ten[2][2];
  sum[3] = ten[3][0] + ten[3][1] + ten[3][2];

  printf("合計点0 = %d\n", sum[0]);
  printf("合計点1 = %d\n", sum[1]);
  printf("合計点2 = %d\n", sum[2]);
  printf("合計点3 = %d\n", sum[3]);

  return 0;

}