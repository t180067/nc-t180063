#include <stdio.h>

int main ()
{
  long long i = 1;

  while (1) {
    i = i*2;
    if ( i < 0 ){
      printf("%d\n",i-1);
      break;
    }
  }

}
