/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:20:06 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/19 15:24:29 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < (ac - 1))
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
