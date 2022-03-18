#include "main.h"

/**
* print_times_table - Prints the n times table
*
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
for (i = 0; i <= n; i	
		k = j * i;
		if (j == 0)
		{																_putchar(k + '0');
																	}
		else if (k < 10 && j != 0)
		{
																		_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k >= 10 && k < 100)
		{
			_putchar(',');
			_putchar(' ');														_putchar(' ');	
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
																	}
		else if (k >= 100)
		{																_putchar(',');
			_putchar(' ');
			_putchar((k / 100) + '0');
			_putchar(((k / 10) % 10) + '0');
			_putchar((k % 10) + '0');
																	}
			}
			_putchar('\n');
		}
	}
}

