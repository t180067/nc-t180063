#include <stdio.h>

int main ()
{ 
  int i;
  int data[] = { 31, 41, 59, 26, 53, 58, 97, 93, 23, 84 };
  int max_data = data[0];
 //配列の要素数＝配列の要素全体の大きさ/配列の要素ひとつ分の大きさ
  for (i = 1; i < sizeof(data) / sizeof(data[0]); i++) {
      if(max_data<data[i])
        max_data=data[i];
        
  }

  printf("最大値は %d です。\n", max_data);
}
