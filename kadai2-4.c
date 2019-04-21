#include <stdio.h>

int main ()
{
  int i = 1;
 
  /* 以下に適当な変更を加えよ */
  
  while (1) {
    i = i*2;
    if ( i < 0 ){
      printf("%d\n",i-1);
      break;
    }
  }

}
