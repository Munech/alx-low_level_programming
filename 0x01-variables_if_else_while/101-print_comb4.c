#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++) /*x place*/
	{
		for (y = (x + 1); y <= '9'; y++) /*y=100s+1*/
		{
			for (z = (y + 1); z < '9'; z++) /*zs*/
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
