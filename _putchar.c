#include "main.h"

/**
* _putchar - print a character.
* @c: given char
* Return: ascii int.
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
