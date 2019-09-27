#include <stdio.h>

int main(int argc, char *argv[])
{
	/* Array that holds five integer elems */
	int a[5];
	int *p;
	int i;

	/*
	 * The a[i] notation refers to the i-th element
	 * of the array.
	 */
	for (i = 0; i < 5; i++)
		a[i] = i;

	/*
	 * Pointers can also be used to conveniently
	 * iterate over an array. The assignment below
	 * uses the fact that the variable name of an array
	 * is a synonym for the location of the first element.
	 */
	p = a;

	/*
	 * We can use the dereferencing operator or array
	 * subscripting to access the underlying value.
	 *
	 *	*(p + i) == p[i]
	 */
	printf("*p=%d\n", *p);
	printf("p[0]=%d\n", p[0]);
}
