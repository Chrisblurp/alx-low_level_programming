#include "main.h"
/**
* more_numbers - prints 10 times the numbers
* Return: Always 0.
*/
void more_numbers(void)
{
int c;
int first_number;
int second_number;
int result;
c = 0;
result = 0;
while (c < 10)
{
while (result <= 10)
{
if (result < 10)
{
second_number = result;
}
else
{
first_number = result / 10;
second_number = result *  10;
_putchar(first_number + '0');
}
_putchar(second_number + '0');
result++;
}
c++;
result = 0;
}
_putchar('\n');

}
