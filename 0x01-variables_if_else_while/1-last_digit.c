#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - generates random number n
*
* Return: Always 0 (Success/correct)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
/* Return: Always 0 (Success/correct) */
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigit = n % 10;
printf("last digit of %d is %d and is ", n, lastdigit);
if (lastdigit > 5)
{
printf("greater than 5");
}
else if (lastdigit == 0)
{
printf("equals to 0");
}
else
{
printf("less than 6 and not 0");
}
printf("\n");
return (0);
}
