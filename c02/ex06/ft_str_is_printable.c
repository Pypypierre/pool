/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:08:35 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/11 12:12:19 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *src)
{
	int	n;
	int	check;

	n = 0;
	check = 1;
	while (src[n] != '\0')
	{
		if (!(src[n] >= 32 && src[n] < 127))
		{
			check = 0;
		}
		n++;
	}
	return (check);
}
