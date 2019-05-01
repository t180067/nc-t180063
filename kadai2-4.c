#include <stdio.h>

int main ()
{
  int i = 1;
 
  
  while (1) {
    i = i+1;
    printf("%d\n",i);
    if ( i < 0 )
      break;
  }

}
