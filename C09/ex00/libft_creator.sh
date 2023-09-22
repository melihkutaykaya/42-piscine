# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 15:51:42 by melkaya           #+#    #+#              #
#    Updated: 2023/09/21 20:55:32 by melkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a

gcc -Wall -Wextra -Werror -c ft_putchar.c -o ft_putchar.o
gcc -Wall -Wextra -Werror -c ft_swap.c -o ft_putstr.o
gcc -Wall -Wextra -Werror -c ft_putstr.c -o ft_strcmp.o
gcc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o
gcc -Wall -Wextra -Werror -c ft_strcmp.c -o ft_swap.o
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

rm -f *.o

