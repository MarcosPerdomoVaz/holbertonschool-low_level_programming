#include <stdio.h>
#include "main.h"
/**
 ** _strcpy - function that copies a string
 ** @dest: destination to copy to
 ** @src: string to be copied
 ** Return: 0
 *     **/
char *_strcpy(char *dest, char *src)
{
	sprintf(dest, "%s", src);
	return (dest);
}
