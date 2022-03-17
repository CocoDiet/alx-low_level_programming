#include "main.h"

/**
 *main - Entry point
 * Description : print the word "-putchar"
 *
 *Return: On success 1.
 *
 */
int _putchar(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');

	return (0);
		
}
