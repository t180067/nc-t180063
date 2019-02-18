#include <stdio.h>

int main ()
{
  short a, b, c;

  printf("a の値を入力してください：");
  scanf("%hd",&a);
  printf("b の値を入力してください：");
  scanf("%hd",&b);
  c = a + b;
  printf("a + b は %d です。\n", c);
}
