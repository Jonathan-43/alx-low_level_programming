#include <main.h>
/**
 * main - prints _putchar
 * Return: to 0
 */
int main(void)
{
	char yo[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(yo[c]);
	}
	_putchar('\n');
	return (0);
}
