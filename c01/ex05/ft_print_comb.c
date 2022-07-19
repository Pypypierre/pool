/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:23:22 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/07 10:40:12 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c )
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7' )
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1;
			while (c <= '9' )
			{	
				if (a >= '0' && b >= '1' && c != '2' )
				{		
					write(1, ", ", 2);
				}
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
