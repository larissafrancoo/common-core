#include <sys/types.h>
#include <unistd.h>
#include "./ft_printf/libftprintf.h"
#include "./libft/libft.h"
#include <signal.h>

void convert(char *str, int pid)
{
	int i = 0;
	int count = 0;
	int byte;
	while(str[i])
	{
		byte = str[i];
		while (count < 8)
		{
			if ((byte % 2) == 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(500);
			count++;
			byte /= 2;
		}
		usleep(500);
		i++;
		count = 0;
	}
}

int main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	int pid = ft_atoi(av[1]);
	convert(av[2], pid);
}
