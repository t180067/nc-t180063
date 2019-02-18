#include <stdio.h>

int main ()
{
  int i;

  double x = 4.0/3.0;
  printf("%49.22f\n\n", x);

  x = 1.0;
  for (i = 0; i < 21; i++) {
    printf("%23.22f %23.22f\n", 0.125*x, 1+0.125*x);
    x = x / 10;
  }
}
