//
// Created by 石塚隆一 on 15/04/23.
//

/* いろいろな値を表示するプログラム */

#include <stdio.h>

int main(void)
{
  int jisuu[3] = {180, 80, 40};

  char kamoku1[] = "C言語";

  char kamoku2[] = "情報処理演習";

  char kamoku3[] = "データベース";

  printf("%s 授業時数:%d\n", kamoku1, jisuu[0]);
  printf("%s 授業時数:%d\n", kamoku2, jisuu[1]);
  printf("%s 授業時数:%d\n", kamoku3, jisuu[2]);

  printf("\n%f + %f = %f\n", 0.1, 0.2, 0.1 + 0.2);
  printf("%x + %x = %x\n", 0x10, 0xb, 0x10 + 0xb);

  return 0;
}
