/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:44:47 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/29 02:17:00 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;
	va_list li;

	i = 0;
	len = 0;
	va_start (li, str);
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar(va_arg(li, int));
			else if (str[i] == 's')
				ft_putstr(va_arg(li, char *));
			else if (str[i] == 'd' || str[++i] == 'i')
				ft_putnbr(va_arg(li, int));
//			else if (str[i] == 'p')
//				ft_XXX(va_arg(li, void *));
//			else if (str[i] == 'u')
//				ft_Xxx(va_arg(li, unsigned int));
//			else if (str[i] == 'x')
//				ft_xxx(va_arg(li, unsigned int));
//			else if (str[i] == 'X')
//				ft_XxX(va_arg(li, unsigned int));
			else if (str[i] == '%')
				ft_putchar('%');
			else
				return (0);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
	return (len);
}

int main(void)
{
	char c = 'x';
	char *s = "funções";
	int n = 20;
	int nu = 23;
	ft_printf("Testando %c %s em %d%i - Hexa: %% - Pointer: %% \n", c, s, n, nu);
	return (0);
}
