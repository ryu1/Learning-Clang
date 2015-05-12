//
// Created by 石塚隆一 on 15/05/12.
//

/* 入力文字を検査するプログラム */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int ch;

  puts("文字を入力してください。>");

  ch = getchar();

  if (isupper(ch)) {
    puts("英大文字を入力しました。");
  }
  else if (islower(ch)) {
    puts("英小文字を入力しました。");
  }
  else if (isdigit(ch)) {
    puts("数字を入力しました。");
  }
  else {
    puts("英数字以外を入力しました。");
  }

  return 0;
}