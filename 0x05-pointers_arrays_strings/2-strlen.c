#include "main.h"
/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: len
 */
int _strlen(char *s)
{
       int length = 0;

	while (s[length])
		length++;
	return (length);
}
