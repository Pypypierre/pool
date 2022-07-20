/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:13:58 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/20 17:43:19 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++:
	}
	return (i);
}

size_t	taille(int size, char **strs, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;

	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += strlen(sep) * (size - 1);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	size_t	t;
	int	i;
	int	v;
	int	j;
	char		*c;

	t = taille(size, **strs, *sep);
	c = malloc(t * sizeof(char));
	i = 0;
	v = 0;
	while(strs[i])
	{	j = 0;
		while(strs[i][j])
		{
			c[v] = strs[i][j];
			v++;
			j++;
		}
		j = 0;
		while (sep[j])
		{
			c[v] = sep[j];
			j++;
			v++;
		}
		i++;
	}
}
