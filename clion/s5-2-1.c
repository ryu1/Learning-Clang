//
// Created by 石塚隆一 on 15/04/24.
//

#include <stdio.h>

int main(void)
{
  int grade;

  printf("あなたの成績(1〜5)を入力してください。> ");
  scanf("%d", &grade);

  switch (grade) {

    case 5:
      printf("たいへんによい成績です。\n");
      printf("この成績を維持するようにがんばってください。\n");
      break;

    case 4:
    case 3:
      printf("良い成績です。\n");
      printf("さらによい成績を取れるようにがんばってください。\n");
      break;
    case 2:
    case 1:
      printf("良い成績ではありません。\n");
      printf("まず苦手な項目の復習からはじめましょう。\n");
      break;
    default:
      printf("入力エラーです。\n");
      break;
  }
  return 0;
}
