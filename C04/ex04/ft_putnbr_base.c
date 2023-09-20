/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:53:14 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/20 14:42:33 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base == 0 || ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (!check_base(base))
		return ;
	else
	{
		len_base = ft_strlen(base);
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / len_base, base);
			write(1, &(base[-(nbr % len_base)]), 1);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nbr, base);
			return ;
		}
		if (nbr > len_base - 1)
			ft_putnbr_base(nbr / len_base, base);
		write(1, &(base[nbr % len_base]), 1);
	}
}
