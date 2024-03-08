#include <sys/types.h>
#include <unistd.h>
#include "./ft_printf/libftprintf.h"
#include <signal.h>

void	funcao(int sign)
{
	static int i = 0;
	static int byte = 0;
	static int bin[8] = {1, 2, 4, 8, 16, 32, 64, 128};

	if(sign == SIGUSR1)
		byte += bin[i];
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
