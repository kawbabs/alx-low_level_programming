#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Return: Alaways success, zero
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
