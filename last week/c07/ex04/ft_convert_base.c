/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 08:09:31 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/21 11:12:00 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_itoa_base(int nb, int t, char *base);

int	ft_strlen(char *c)
{
	int	i;

	while (c[i])
		i++;
	return (i);
}

int	ft_ernb(char *nb)
{
	int	i;

	i = 0;
	if (nb[i] == '+' || nb[i] <= 32 || nb[i] == 127)
		return (0);
	if (nb[i] == '-')
		i++;
	while (nb[i])
	{
		if (!(nb[i] >= 33 && nb[i] <= 126))
		{
			if (!(nb[i] >= '0' && nb[i] <= '9'))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base [i] == '-')
			return (0);
		if (!(base[i] >= 33 && base[i] <= 126))
		{
			if (!(base[i] >= '0' && base[i] <= '9'))
				return (0);
		}
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	nb;
	int	i;
	int	sign;
	int	t;

	sign = 1;
	nb = 0;
	i = 0;
	t = strlen(base_from);
	if (nbr[0] == 45)
	{
		sign *= -1;
		i++;
	}
	while (nbr[i])
		{
			if (nbr[i] >= '0' && nbr[i] <= '9')
				nb = nb * 10 + (base_from[i] - '0');
			else ()
			i++;
		}
	printf("%d", nb * sign);
	return (nb * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	int	t;
	char		*c;

	if (ft_ernb(nbr) == 0)
		return (0);
	if (ft_error(base_from) == 0 || ft_error(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	t = ft_strlen(nbr);
	c = ft_itoa_base(nb, t, base_to);
	return (c);
}
