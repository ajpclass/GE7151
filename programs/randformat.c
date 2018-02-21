#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int   i, n;
printf("\n%s",
   "How many random numbers do you want to see? ");
scanf("%d", &n);
for (i = 0; i < n; ++i) {
if (i % 10 == 0)
   putchar('\n');
   printf("%7d\n", rand());
}
printf("\n\n");
return 0; }