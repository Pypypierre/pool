/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:02:28 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/21 10:03:50 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	middle(int *nb, int *j, char *c)
{
	if (*nb == -2147483648)
	{
		c[*j] = '-';
		c[*j + 1] = '2';
		*nb = 147483648;
		j++;
	}
	if (*nb < 0)
	{
		c[*j] = '-';
		*nb *= -1;
		j++;
	}
}

char	*ft_itoa_base(int nb, int t, char *base)
{
	int	i;
	int	j;
	char	*c;

	j = 0;
	i = 0;
	while (base[i])
		i++;
	c = malloc(sizeof(char) * (t + 1));
	if (c == NULL)
		return (NULL);
	middle(&nb, &j, c);
	if (nb >= i)
	{
		ft_itoa_base((nb / i), t, base);
		c[j] = (base[nb % i]);
		j++;
	}
	else
	{
		c[j] = (base[nb]);
		j++;
	}
	c[j] = '\0';
	return (c);
}
