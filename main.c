#include <stdio.h>
#include "types_operators_and_expressions.h"
#include "pointers_and_arrays.h"
#include "io.h"


int main(void)
{
	printf("hello, world\n");

	//types operators and expressions
	integer_constants_test();
	
	octal_hexadecimal_integer();

	character_constant_test();
	
	string_constant_test();

	declarations_test();

  	pointer_test();

	return 0;
}
