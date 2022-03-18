#include <stdio.h>
/**
  * Main - Entry point
  *
  * Description: prints all alphabets a-z lowercase
  *
  * Return: Always 0 (Success/correct)
  */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
putchar('\n');
}
return (0);
}
