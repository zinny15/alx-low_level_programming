#include <stdio.h>
/**
* main - program entry point.
*
* description: 'all possible combination of single digits'
*
* Return: 0 (success)
*/

int main(void)

{

	int num;



	for (num = '0'; num <= '9'; num++)

	{

		putchar(num);

		if (num == '9')

		{

			break;

		}

		else

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}


