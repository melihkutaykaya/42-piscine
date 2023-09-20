/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:42:31 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/04 15:46:32 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_int(int nb)
{
	char	a;
	char	b;

	if (nb <= 9)
	{
		a = nb + 48;
		ft_putchar('0', a);
	}
	else
	{
		a = nb / 10;
		b = nb % 10;
		a = a + 48;
		b = b + 48;
		ft_putchar(a, b);
	}
}

void	ft_print_digits(int i, int j)
{
	ft_print_int(i);
	write(1, " ", 1);
	ft_print_int(j);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i == 98 && j == 99)
			{
				ft_print_digits(i, j);
			}
			else
			{
				ft_print_digits(i, j);
				ft_putchar(',', ' ');
			}
			j++;
		}
		i++;
	}
}
