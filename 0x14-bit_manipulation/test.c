#include <stdio.h>

void print_bin(char *s);

int main(void)
{
	print_bin("1010100011");
	return (0);
}




void print_bin(char *s)
{
	unsigned int i, result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
:x
if (s[i] == '1')
			result++;
		if (s[i + 1] != '\0')
			result = result << 1;
	}

	printf("%d\n", result);
}
