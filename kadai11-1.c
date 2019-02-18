#include <stdio.h>

int main ()
{
  FILE *fp;
  fp = fopen("data.txt", "r");

  int x;
  double s = 0.0;
  int i = 0;

  while (fscanf(fp, "%d", &x) != EOF ) {
    s = s + x;
    i++;
  }

  printf("平均値は %g 点です。\n", s/i);

  fclose(fp);
}
