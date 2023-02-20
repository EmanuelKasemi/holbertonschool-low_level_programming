#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int i = 0;

		for (i = 0; i < 10; i++)
		while (i < 10)
		{
			putchar(i + '0');
			if (i < 9)														{
				putchar(44);														putchar(32);													}
			i++;
		}
		putchar('\n');

		return (0);
}
