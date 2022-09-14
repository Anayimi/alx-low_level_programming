#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10 times
* Return: x10 a-z
*/

void print_alphabet_x10(void)
{
char alpha, ch;

ch = 0;

while (ch < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
ch++;
_putchar('\n');
}
}
