#include "main.h"

/**
 * print_alphabet_x10 - print x10  alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
char c;
int i;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)

_putchar(c);
_putchar('\n');
i++;
}


}
