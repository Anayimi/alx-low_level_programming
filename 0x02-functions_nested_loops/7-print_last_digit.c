#include "main.h"
#include "6-abs.c"

/**
* print_last_digit - main function
* @n: integer to get last digit
* Return: last digit of n
*/

int print_last_digit(int n)
{
_putchar('o' + _abs(n % 10));
return (_abs(n % 10));
}
