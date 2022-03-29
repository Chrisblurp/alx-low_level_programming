#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success/correct)
*/
int main(void)
{
char base_16, base_alpha;
for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}
for (base_alpha = 'a'; base_alpha <= 'f'; base_alpha++)
{
putchar(base_alpha);
}
putchar('\n');
return (0);
}
