#include <stdio.h>
#include <ctype.h>
/*
//is_alpha
int lala(char c)
{
	int a;
	a = isalpha(c);
	printf ("%d\n", a);
}
*/
/*
//is_digit
int lala(char c)
{
	int a;
	a = isdigit(c);
	printf ("%d\n", a);
}
*/
/*
//is_alnum
int lala(char c)
{
	int a;
	a = isalnum(c);
	printf("%d\n", a);
}
*/
/*
//is_ascii
int lala(char c)
{
	int a;
	a = isascii(c);
	printf("%d\n", a);
}
*/

//is_print
int lala(char c)
{
	int a;
	a = isprint(c);
	printf("%d\n", a);
}

int main(void)
{
	printf("Result lowcase: ");
	lala('a');
	printf("\nResult upercase: ");
	lala('A');
	printf("\nResult number: ");
	lala('9');
	printf("\nResult signal: ");
	lala('+');
	printf("\nResult non-print: ");
	lala('\n');
	printf("\nResult non-ascii: ");
	lala(128);
	return (0);
}
