/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:45:27 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/07 18:18:16 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	index;
	int	temp;

	start = 0;
	index = size - 1;
	while (start < (size / 2))
	{
		temp = tab[start];
		tab[start] = tab[index];
		tab[index] = temp;
		index--;
		start++;
	}
}
