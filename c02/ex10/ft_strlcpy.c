/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:04:54 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/16 08:54:44 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ts;
	unsigned int	n;
	unsigned int	len;

	n = 0;
	ts = ft_strlen(src);
	len = ts;	
	if ( ts < size)
		len = size -1;
	while (n <= len  && len != 0)
	{
		dest[n] = src[n];
		n++;
	}
	dest[len] = '\0';
	return (ts);
}
