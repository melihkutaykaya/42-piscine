# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 15:51:54 by melkaya           #+#    #+#              #
#    Updated: 2023/09/21 20:54:49 by melkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_P = ./srcs/
HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror
SRCS = $(SRCS_P)ft_putchar.c $(SRCS_P)ft_putstr.c $(SRCS_P)ft_strcmp.c $(SRCS_P)ft_strlen.c $(SRCS_P)ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $*.c -I$(HEADER) -o $*.o

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all