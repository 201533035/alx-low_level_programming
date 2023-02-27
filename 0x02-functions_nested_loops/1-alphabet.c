#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 0;letter <= 26; letter++)
	{
		putchar(letter);
		putchar('\n');
		return (0);
	}

}
