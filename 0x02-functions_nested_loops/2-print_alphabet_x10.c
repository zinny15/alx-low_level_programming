#include "main.h"
/**
* print_alphabet_x10 -> printing alphabet 10 times.
* return 1 on success
*/

void print_alhabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

