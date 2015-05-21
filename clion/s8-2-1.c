//
// Created by 石塚隆一 on 15/05/21.
//

/* おみくじを表示するプログラム */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void omikuji(void);

int main(void)
{
  srand((unsigned)time(NULL));

  omikuji();

  return 0;
}

/*** おみくじの表示 ***/
/* （仮引数）なし（返却値）なし */
void omikuji(void)
{
  char *kuji[] = {
      "大吉 : 何をやってもうまくいきます。頼み事は今日すべし。",
      "中吉 : 見つからなかった探しものが見つかるでしょう。",
      "小吉 : 昔読んだ本をもう一度読んで見ましょう。"
      "新しい発見があります。",
      "凶 : 外出は控えめに。ゆっくりお風呂に入りましょう。",
      "大凶 : 借りたものは今日中に返しましょう。",
      "思わぬトラブルをまねきます。"
  };

  puts(kuji[rand() % 5]);
}
