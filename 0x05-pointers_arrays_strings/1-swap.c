#include "main.h"
/**
  * swap_int - swaps value of two integers
  * @a: int a
  * @b: int b
  */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}