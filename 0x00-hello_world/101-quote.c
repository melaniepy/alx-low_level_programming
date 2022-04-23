/*
 * File: 101-quote.c
 * Auth: Mfon Etuk
 */

<<<<<<< HEAD
int main(void)

/**
* main - prints the string using the putchar function
*
* Return: 0
*
*/
 
{
	 putchar("\and that piece of art is useful" - Dora Korpar, 2015-10-19);

	 return (0);
=======
#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" -Dora Korpar, 2015-10-19",
 *		followed by a new line, to standard error
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
>>>>>>> 38c8590cc61c1235e072a574c61b206b3e15227d
}
