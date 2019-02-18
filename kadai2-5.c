#include <stdio.h>

int main ()
{
  long long i = 1;

  while (1) {
    i = i*2;
    printf("%lld\n", i);
    if ( i < 0 ) break;
  }

}
