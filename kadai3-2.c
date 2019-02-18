#include <stdio.h>

int main ()
{
  double x = 1.0;
  while (1) {
    x = x / 10.0;
    printf("%g\n", x);
    if ( x == 0 ) break;
  }
}
