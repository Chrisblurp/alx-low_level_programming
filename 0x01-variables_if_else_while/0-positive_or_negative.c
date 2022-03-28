#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main -  Entry point
* Return: Always 0.
*/
/* more headers goes there */
/* positive_or_negative - entry  point */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
printf("\n");
return (0);
}
