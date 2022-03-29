#include "main.h"
/**
* print_square - print square
* @size: print size
* Return: Always 0.
*/
void print_square(int size)
{
int c;
int a;
if (size > 0)
{
for (c = 0; c < size; c++)
{
for (a = 0; a < size; a++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

