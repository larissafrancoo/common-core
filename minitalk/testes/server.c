#include <sys/types.h>
#include <unistd.h>
#include "./ft_printf/libftprintf.h"
#include <signal.h>

char byte = 0;

void	funcao(int sign)
{
	static int i;
//	int num = 1;

	if(sign == SIGUSR1)
	{
		if (i == 0)
			byte += 1;
		if (i == 1)
			byte += 2;
		if (i == 2)
			byte += 4;
		if (i == 3)
			byte += 8;
		if (i == 4)
			byte += 16;
		if (i == 5)
			byte += 32;
		if (i == 6)
			byte += 64;
		if (i == 7)
			byte += 128;
	}
	if (i == 7)
	{
		ft_printf("%c", byte);
		i = 0;
		byte = 0;
	}
	else
		i++;
}

int main(void)
{
	int sla = getpid();
	ft_printf("%d \n", sla);
	while(1)
	{
		signal(SIGUSR1, funcao);
		signal(SIGUSR2, funcao);
		pause();
	}
}
