/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkaya <melkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:40:05 by melkaya           #+#    #+#             */
/*   Updated: 2023/09/10 14:04:47 by melkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 0 && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
			k++;
		}
		else if (k > 0 && 'A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			k = 0;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			k = 0;
		else
			k++;
		i++;
	}
	return (str);
}
