#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - returns all sum of its paramters
  * @n: the number of parameters passed to its function
  * @a...: a variable number of parameters to calculate the sum of
  * Return: if n == 0 - 0
  * otherwise - yhe sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
