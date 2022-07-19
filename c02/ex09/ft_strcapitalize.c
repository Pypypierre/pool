/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:31:27 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/16 08:34:05 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *str, int n)
{
	if (str[n] >= 97 && str[n] <= 122)
	{
		str[n] = str[n] - 32;
	}
}

int	check(char *str, int n)
{
	if (!(str[n - 1] >= 97 && str[n -1] <= 122))
	{
		if (!(str[n - 1] >= 65 && str[n -1] <= 90))
		{
			if (str[n] >= 33 && str[n] < 127)
			{
				return (1);
			}
		}
	}
	return (0);
}

void	ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	ft_strlowcase(str);
	n = 0;
	if (str[n] >= 97 && str[n] <= 122)
	{
		str[n] = str[n] - 32;
	}
	while (str[n] != '\0')
	{
		if (check(str, n))
		{
			ft_strupcase(str, n);
		}
		n++;
	}
	return (str);
}
