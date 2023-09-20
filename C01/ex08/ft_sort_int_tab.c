/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:59:01 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/09 16:30:40 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	start = 0;
	while (start < (size - 1))
	{
		if (tab[start] > tab[start + 1])
		{
			temp = tab[start];
			tab[start] = tab[start + 1];
			tab[start + 1] = temp;
			start = 0;
		}
		else
			start++;
	}
}
