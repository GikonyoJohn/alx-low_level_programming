#include "main.h"

/**
 * print_last_digit - printr the last digit of a number
 *@n: arg
 * Return: value of the last digit using moduls
 */
int print_last_digit(int n)
{
int a;

if (n < o)
n = -n;

a = n % 10;

if (a < 0)
a = -a;
_putchar(a + '0');

return (a);
}
