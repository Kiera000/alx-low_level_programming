#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'Z')
	{
		putchar(ch)
		ch++;
	}
	putchar('\n');

	return (0);
}
