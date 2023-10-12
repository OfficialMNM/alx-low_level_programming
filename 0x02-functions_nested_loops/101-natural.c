#include<stdio.h>
/**
 * main- checks for multiples of 3 and 5
 * below 1024 and finds their sum
 * Return: 0 on successful execution
 */

int main(void)
{
	int b, c;

	for (b = 0; b < 1024; b++)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			c += b;
		}
	}

	printf("%d\n", c);
	return (0);
}
