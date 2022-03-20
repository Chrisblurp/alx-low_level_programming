#include <stdio.h>
/**
  * Main - Entry point
  * Return: Always 0 (Success/correct)
  * Description: to print the posible combinaton of 2 digit numbers
*/
int main(void)
{
int num;
for (num = 01; num <= 99; num++)
{
putchar(num);
if (num == 99)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
