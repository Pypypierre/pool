/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:49:16 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/19 12:49:12 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	error(char *base)
{
	int	x;
	int	y;

	x = 0;
	while (base[x] != '\0')
	{
		if (base[x] == '+' || base[x] == '-')
			return (0);
		y = 0;
		while (base[y] != '\0')
		{
			if (base[x] == base[y] && x != y)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	middle(int *nb)
{
	if (*nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		*nb = 147483648;
	}
	if (*nb < 0)
	{
		ft_putchar('-');
		*nb *= -1;
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (error(base) == 0)
		i = 0;
	if (!(i == 0))
	{
		if (!(i == 1))
		{
			middle(&nb);
			if (nb >= i)
			{
				ft_putnbr_base((nb / i), base);
				ft_putchar(base[nb % i]);
			}
			else
			{
				ft_putchar(base[nb]);
			}
		}
	}
}
