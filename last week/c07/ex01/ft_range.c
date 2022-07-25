/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:50:03 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/20 10:10:47 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	size_t	diff;
	int		*tab;
	int		i;

	diff = max - min;
	tab = malloc(diff * sizeof(int));
	i = 0;
	while (min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
