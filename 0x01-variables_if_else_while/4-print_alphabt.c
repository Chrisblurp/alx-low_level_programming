#include <stdio.h>
/**
* Main - Entry point
*
* Return: Always 0 (success/correct)
*/
int main(void)
{

char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'e')
continue;
else if (alpha == 'q')
continue;
putchar (alpha);
}
putchar('\n');
return (0);
}
