#include<stdio.h>
	
 long long fac (long long n)
{
  return (n == 0) ? 1 : n*fac(n-1);
}

 int main ()
{
  long long i;
  for (i = 1; i <= 16; i++) {
    printf("%2lld! = %lld\n", i, fac(i));
  }
}
