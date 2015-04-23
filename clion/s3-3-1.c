//
// Created by 石塚隆一 on 15/04/23.
//
/* 配列の要素を利用するプログラム */

#include <stdio.h>

int main(void)
{

 int array1[] = {1, 2, 3};

 int array2[5];

 array2[0] = 10;

 array2[1] = array1[0];

 array2[2] = array1[1] + 100;

 printf("array2[0] = %d\n", array2[0]);
 printf("array2[1] = %d\n", array2[1]);
 printf("array2[2] = %d\n", array2[2]);

 return 0;

}