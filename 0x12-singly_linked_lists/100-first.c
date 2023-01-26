#include <stdio.h>

void __attribute__ ((constructor)) premain();

/**
 * premain - A function that is before the main function
 *
 * Return: Nothing
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
