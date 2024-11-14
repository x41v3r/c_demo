#include <stdio.h>

void integer_constants_test();

void integer_constants_test()
{
	long l = 1234;

	unsigned int ui = -1234u;
	printf("ui = %u\n",ui);

	int il = (int) 1234567890123456;
	printf("il = %d\n", il);
}
