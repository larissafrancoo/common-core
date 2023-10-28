# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 11:53:58 by lfranco           #+#    #+#              #
#    Updated: 2023/10/28 08:21:21 by lfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

SRCS = ft_putchar_fd.c\
	ft_calloc.c\
	ft_atoi.c\
	ft_isdigit.c\
	ft_strdup.c\
	ft_strncmp.c\
	ft_tolower.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_strjoin.c\
	ft_strchr.c\
	ft_substr.c\
	ft_strrchr.c\
	ft_putstr_fd.c\
	ft_putnbr_fd.c\
	ft_bzero.c\
	ft_putendl_fd.c\
	ft_memcpy.c\
	ft_isalnum.c\
	ft_memset.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_isascii.c\
	ft_isalpha.c\
	ft_toupper.c\

.c.o:
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs libft.a $(OBJS)

	
all: $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
