/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:12:47 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/11 10:41:21 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;
	int	check;

	n = 0;
	check = 1;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 65 && str[n] <= 90))
		{
			if (!(str[n] >= 97 && str[n] <= 122))
			{
				check = 0;
			}
		}
		n++;
	}
	return (check);
}