#include "main.h"
/**
 * reverse - reverses a string
 * @str: string to reverse
 * @length: length of a string
 */

void reverse(char str[], int length)
{
	int i;
	char *a, *b, character;

	a = str;
	b = str;

	b += length - 1;
	for (i = 0; i < length / 2; i++)
	{
		character = *b;
		*b = *a;
		*a = character;
		a++;
		b--;
	}
}
/**
 * _itoa - converts integer to character
 * @str: string
 * @n: number to convert
 * @base: base
 * Return: pointer to a string
 */
char *_itoa(int n, char *str, int base)
{
	int a;
	int negative;
	int r;

	negative = 0;
	a = 0;
	if (n == 0)
	{
		str[a] = '0';
		str[a + 1] = '\0';
		return (str);
	}
	if (n < 0 && base == 10)
	{
		negative = 1;
		n = -n;
	}
	while (n != 0)
	{
		r = n % base;
		if (r > 9)
		{
			str[a] = r - 10 + 'a';
		}
		else
		{
			str[a] = r + '0';
		}
		n = n / base;
		a++;
	}
	if (negative)
	{
		str[a++] = '-';
	}
	str[a] = '\0';
	reverse(str, a);

	return (str);
}
