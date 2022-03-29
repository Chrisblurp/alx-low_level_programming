#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success/correct)
* Description: to print the posible combinaton of 2 digit numbers
*/
int main(void)
{
int num;
for (num = 1; num <= 89; num++)
{
putchar('%2d', num);
if (num == 89)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
