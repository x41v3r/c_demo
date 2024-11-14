#include <stdio.h>

void get_and_put(void)
{
	char c;
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
