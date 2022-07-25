/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:13:58 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/20 18:17:42 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

int	taille(int size, char **strs, char *sep)
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
	l += ft_strlen(sep) * (size - 1);
	return (l);
}

void	middle(char **strs, char *c, char *sep, int size)
{
	int	j;
	int	i;
	int	v;

	i = 0;
	v = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			c[v] = strs[i][j];
			v++;
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			c[v] = sep[j];
			j++;
			v++;
		}
		i++;
	}
	c[v] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		t;

	if (*strs == NULL)
		return (*strs);
	t = taille(size, strs, sep);
	c = malloc((t + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	middle(strs, c, sep, size);
	return (c);
}
