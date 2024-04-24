# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 12:01:01 by lfranco           #+#    #+#              #
#    Updated: 2024/04/23 21:58:37 by larissa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

LIBRARY = ./libft/

SRCS = main.c\
       free_error.c\
       checker.c\
       comands_push.c\
       comands_base.c\
       comands_r.c\
       comands_sp.c\
       init.c\
       sort_operations.c\

all:	push_swap

libft:
	cd $(LIBRARY) && $(MAKE) && cp -v libft.a ../

push_swap: libft
	cc $(SRCS) libft.a -o $(NAME)

clean:
	cd $(LIBRARY) && $(MAKE) clean

fclean:	clean
	$(RM) $(NAME)
	$(RM) libft.a
	cd $(LIBRARY) && $(MAKE) fclean

re:	fclean all

.PHONY:	all clean fclean re libft
