#include <unistd.h>

/**
  *_putchar - writes the character c to sdout
  * @c: the character to print
  *
  * Return: On sucess 1.
  *on error -1 is returned, and ermo is set appropiately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
