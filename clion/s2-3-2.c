//
// Created by 石塚隆一 on 15/04/23.
//

#include <stdio.h>
#include <printf.h>

int main(void)
{
  printf("これは\tエスケープシーケンスの確認です。\n");

  printf("\"も\'もエスケープシーケンスで表示します。\n");

  printf("\\nを使わないと");

  printf("1行に続けて表示されます。\n");

  printf("\\nを使うと、\n改行します。\n");

  printf("\\bでは表示を戻します。");

  printf("a\bb\bc\bd\be\bf\bg");

  printf("\n警告音も聞こえますか\?\a\a\a\a\a");

  return 0;

}
