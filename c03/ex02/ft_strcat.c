/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 07:59:05 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/14 08:57:13 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	n;

	n = ft_strlen(dest);
	while (*src)
	{
		dest[n] = *src;
		n++;
		src++;
	}
	dest[n] = '\0';
	return (dest);
}
