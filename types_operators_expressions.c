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

void octal_hexadecimal_integer()
{
	int a = 037;  // 31 in octal
	int b = 0x1F;  // 31 in hexadecimal

	printf("a(037) = %d\n", a);  // a(037) = 31
	printf("b(0x1F) = %d\n", b);  // b(0x1F) = 31
}

void floating_point_constants_test()
{

}
