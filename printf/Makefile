# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbelet <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:36:19 by lbelet            #+#    #+#              #
#    Updated: 2021/11/08 11:46:25 by lbelet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra

SRC = ft_check_format.c ft_printf.c ft_printf_int.c ft_printf_p.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.c
	$(cc) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
