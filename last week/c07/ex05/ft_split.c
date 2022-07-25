/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:35:10 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/25 13:38:29 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (is_charset(*str, charset) == 1 && *str)
			str++;
		while (is_charset(*str, charset) == 0 && *str)
			str++;
		count++;
	}
	return (count);
}

char	*ft_ncpy(char *str, int n)
{
	char	*s2;
	int		i;

	s2 = malloc(sizeof(char) * (n + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < n && *str)
	{
		s2[i] = str[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	**ft_split(char *str, char *charset)
{
	char	**tc;
	int		j;
	int		len;

	tc = NULL;
	tc = malloc(sizeof(char *) * (count(str, charset) + 1));
	if (tc == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		len = 0;
		while (is_charset(*str, charset) == 1 && *str)
			str++;
		while (is_charset(*str, charset) == 0 && *str)
		{
			str++;
			len++;
		}
		tc[j] = ft_ncpy(str - len, len);
		j++;
	}
	tc[j] = '\0';
	return (tc);
}
