#include <stdio.h>
/**
  * Main - Entry point
  *
  * Return: Always 0 (success/correct)
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num == 57)
{break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
