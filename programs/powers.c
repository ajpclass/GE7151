#include <stdio.h>
int main(void)
{
  // This is a comment
  int i = 0, power = 1;
  while (++i <= 10)
    printf("%6d\n", power *= 2);
  printf("\n");
  return 0;
}