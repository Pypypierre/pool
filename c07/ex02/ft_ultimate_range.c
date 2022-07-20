/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:17:40 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/20 17:12:35 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	size_t	diff;
	size_t	i;

	i = 0;
	diff = max - min;
	*range = malloc(diff * sizeof(int));
	if (range[i] == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	if (min == max)
	{
		return (i);
	}
	else
		return (-1);
}
