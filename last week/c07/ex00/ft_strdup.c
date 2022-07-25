/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:06:53 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/25 14:31:51 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int			i;
	size_t		l;
	char		*c;

	l = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		l++;
	}
	c = malloc(l * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	return (c);
}

int	main()
{
	char	str[] = "loloffk";
	char	*s1;
	s1 = ft_strdup(str);
	while (*s1)
	{
		write(1, &(*s1), 1);
		s1++;
	}
}
