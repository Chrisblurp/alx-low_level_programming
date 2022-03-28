#include "main.h"
/**
* print_diagonal - prints diagonal line
* @n: print int
* Return: Always 0.
*/
void print_diagonal(int n)
{
int c;
int b;
if (n > 0)
{
for (c = 0; c < n; c++)
{
for (b = 0; b < c; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');

}
}
else
{
_putchar('\n');
}
}
