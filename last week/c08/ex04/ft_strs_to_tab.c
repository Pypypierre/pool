/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:45:36 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/25 11:43:27 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_cpy(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tabstruc;

	tabstruc = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tabstruc == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tabstruc[i].size = ft_strlen(av[i]);
		tabstruc[i].str = av[i];
		tabstruc[i].copy = ft_cpy(av[i]);
		if (tabstruc[i].str == NULL)
			return (NULL);
		i++;
	}
	tabstruc[i].str = NULL;
	return (tabstruc);
}
