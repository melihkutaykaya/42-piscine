/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:33:13 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/03 19:53:28 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char comb[3], int i, int j, int k)
{
	comb[0] = '0' + i;
	comb[1] = '0' + j;
	comb[2] = '0' + k;
	write(1, comb, 3);
}

void	ft_print_comb(void)
{
	char	comb[3];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_write_comb(comb, i, j, k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
