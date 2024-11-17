#include <stdio.h>
#include <limits.h>

void output_integer_range()
{
	printf("INT_MAX: %d\n", INT_MAX);
}

void integer_constants_test()
{
	long l = 1234;

	unsigned int ui = -1234u;
	printf("ui = %u\n",ui);

	int il = (int) 1234567890123456;
	printf("il = %d\n", il);
}
#include <stdio.h>

int octal_hexadecimal_integer()
{
	int a = 037;
	int b = 0x1F;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}
