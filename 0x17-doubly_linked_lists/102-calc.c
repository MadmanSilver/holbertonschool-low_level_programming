#include <stdio.h>

int main(void)
{
	unsigned int one, two, res = 0;

	printf("10001 = %d", isPalindrome(10001));

	for (one = 100; one != 1000; one++)
	{
		for (two = 100; two != 1000; two++)
		{
			if (isPalindrome(one * two))
			{
				if (one * two > res)
					res = one * two;
			}
		}
	}

	printf("%d\n", res);
	return (1);
}

int isPalindrome(unsigned int n)
{
	unsigned int left = 1, right = 10;

	while (n / left != 0)
		left *= 10;
	left /= 10;

	while ((n % right) / (right / 10) == (n / left) % 10)
	{
		if (left < right)
			return (1);
		left /= 10;
		right *= 10;
	}

	return (0);
}
