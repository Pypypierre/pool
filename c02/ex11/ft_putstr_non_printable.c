/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:40:12 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/11 19:06:55 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[n] / 16]);
			ft_putchar("0123456789abcdef"[str[n] % 16]);
		}
		else
			ft_putchar(str[n]);
		n++;
	}
}
