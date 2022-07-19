/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:15:32 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/16 10:45:53 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"
#define DIGIT_NB 16

void	print_hex(unsigned long long nb, size_t digits_nb)
{
	char	a;

	if (digits_nb > 0)
	{
		print_hex(nb / 16, digits_nb - 1);
		a = HEX[nb % 16];
		write(1, &a, 1);
	}
}

void	middle( int ctn, int nb, char *a)
{
	int	n;

	n = 0;
	while (n < nb)
	{
		if (ctn == 0)
		{
			write(1, " ", 1);
			print_hex((unsigned long long)(a[n]), 2);
			print_hex((unsigned long long)(a[n + 1]), 2);
			n++;
		}
		else if (ctn == 1)
		{		
			if (a[n] < 32 || a[n] == 127)
				write(1, ".", 1);
			else
				write(1, &a[n], 1);
		}
		n++;
	}
}

void	print_fl(void *addr, int nb)
{
	int	ctn;
	int	i;

	ctn = 0;
	i = 0;
	while (ctn < 2)
	{
		if (ctn == 1)
			write(1, " ", 1);
		middle(ctn, DIGIT_NB, addr);
		if (i <=nb && ctn == 0)
		{
			middle(ctn, nb, addr);
		}
		while (i <= nb && ctn ==0)
		{
			write(1, " ", 1);
			write(1, "  ", 2);
			i++;
		}
		ctn++;
	}
}

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	size_t			i;
	unsigned int	ls;
	unsigned int	rt;

	ls = size / 16;
	rt = size % 16;
	i = 0;
	if (size != 0)
	{
		while (i <= ls)
		{
			print_hex(((unsigned long long)(addr + 16 * i)), 16);
			write(1, ":", 1);
			if (i < ls)
				print_fl((addr + 16 * i), 0);
			else if (rt != 0 && i == ls)
				print_fl((addr + 16 * i), (16 - rt));
			write(1, "\n", 1);
			++i;
		}
	}
	return (addr);
}

#include <stdlib.h>

int	main(int ac, char **av)
{
	char	str[] = "oiehrohr\n\nhoaher";

	if (ac > 1)
		ft_print_memory(str, atoi(av[1]));
}
