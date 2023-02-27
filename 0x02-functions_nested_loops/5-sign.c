#include "main.h"

/**
 * print_sign -prints the sign of a number 
 * @c: The number to be checked
 * Return
 */

int print_sign(int n)
{
	if (n > 0)
	{
		put_char(43);
		return (1);
	}
	else if (n < 0)
	{
		 put_char(45);
                 return (-1);
	}
	else
	{
		 put_char(40);
                 return (0);
	}
}
