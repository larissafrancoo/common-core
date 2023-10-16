#include <ctype.h>
#include <stdio.h>

int lala(char o)
{
	int a;
	a = isprint(o);
	return (a);
}

int main(void)
{
	int b;
	b = -1;
	while (++b <= 127)
		printf("Ascii: %d - Ret: %d\n", b, lala(b));
	return (0);
}
