/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:47:56 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/13 12:46:32 by pduhamel         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	n;

	cnt = 0;
	n = ft_strlen(dest);
	while (src[cnt] != '\0' && cnt < nb)
	{
		dest[n] = src[cnt];
		n++;
		cnt++;
	}
	dest[n] = '\0';
	return (dest);
}
