#include <stdio.h>
/**
  * Main - Entry point
  *
  * Return: Always 0 (Success/Correct)
 */
int main(void)
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
