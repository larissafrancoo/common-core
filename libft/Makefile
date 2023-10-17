# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 11:53:58 by lfranco           #+#    #+#              #
#    Updated: 2023/10/17 04:56:42 by lfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)


SRCS = teste.c

.c.o:
	$(CC) $(CFLAGS) -I . -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs libft.a $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
