#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0;
	while (++i <= 133)
		fprintf("strerror_ret.txt", "%d - %s.\n", i, strerror(i));
	return (0);
}
