#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	 * A pointer is a variable that contains the
	 * address of another variable.
	 */
	int *ptr;
	int x = 10;

	/*
	 * The unary operator '&' gives the address of an
	 * object. So the below statement assigns the address
	 * of x to the variable ptr.
	 */
	ptr = &x;

	/*
	 * Whenever we want to access the object the pointer
	 * points to we make use of the dereferencing operator
	 * '*'.
	 */
	*ptr = 5;
	printf("x=%d\n", x);
}
