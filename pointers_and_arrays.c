#include <stdio.h>

void pointer_test()
{
  printf("\n************ pointer_test ************\n");
  unsigned int mem_address = 0x000e000f;
  int *ptr = (int*)mem_address;
  int value = *ptr;
  printf("value: %d\n",value);
}
