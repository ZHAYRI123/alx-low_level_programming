#include "main.h"
#include <unistd.h>
 /**
  * putchar - write the char
  * @c: the char
  * Return: 1 if the program success
  * on error: -1
  */
int _putchar(void)
{
	return (write(1, &c, 1));
}
