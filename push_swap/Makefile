# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 12:01:01 by lfranco           #+#    #+#              #
#    Updated: 2024/04/21 17:43:15 by lfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

LIBRARY = ./libft/
FT_PRINTF = ./ft_printf/

SRCS = main.c\
       checker.c\
       ft_stacks.c\
       op_functions.c\

all:	push_swap

libft:
	cd $(LIBRARY) && $(MAKE) && cp -v libft.a ../

ft_printf:
	cd $(FT_PRINTF) && $(MAKE) && cp -v libftprintf.a ../

push_swap: libft ft_printf
	cc $(SRCS) libft.a libftprintf.a -o $(NAME)

clean:
	cd $(LIBRARY) && $(MAKE) clean
	cd $(FT_PRINTF) && $(MAKE) clean

fclean:	clean
	$(RM) $(NAME)
	$(RM) libft.a libftprintf.a
	cd $(LIBRARY) && $(MAKE) fclean
	cd $(FT_PRINTF) && $(MAKE) fclean

re:	fclean all

.PHONY:	all clean fclean re libft ft_printf
