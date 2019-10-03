/*
 * Exercises:
 *	1. Create a function that swaps the values of two integers.
 *
 *	2. Create your own version of the strlen function using
 *	   only pointer arithmetic. You may use the strlen man
 *	   page for a description of the function:
 *	   http://man7.org/linux/man-pages/man3/strlen.3.html
 *
 *	3. Write a small program that declares and initializes a
 *	   char and a pointer to this char. Your program should
 *	   print out the value, address, and size of each of the
 *	   two variables.
 *
 *	4. Generate a patch using git-format-patch [1]. Make sure
 *	   to include your signed-off by (-s option).
 *
 *	   [1] https://git-scm.com/docs/git-format-patch
 */
 
#include  <stdio.h>
#include  <stdlib.h>

int main(void)
{
    //Question 1
    int x = 5, y = 7;
    
    printf("x = %d and y = %d\n", x, y);
    swapFunction(&x, &y);
    printf("x = %d and y = %d\n", x, y);
    
    //Question 2
    const char *tempStr = "hello";
    
    returnStrlen(tempStr);
    printf( "\nString = %s, and length = %d.\n", tempStr, returnStrlen(tempStr) );
    
    //Question 3
    char crt = 'A', *chrptr = &crt;
       
    printf("Value = %c, Address = %d, Size = %d\n", crt, &crt, sizeof(crt));
    printf("Value = %d, Address = %d, Size = %d\n", chrptr, &chrptr, sizeof(chrptr));
        
    return 0;
}

void swapFunction(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;   
}

int returnStrlen(char *string)
{
    char* indx = (char *) malloc(sizeof(string));  
    indx = string;
    
    while(*indx != '\0')
        ++indx;
    
    return indx-string;
}

