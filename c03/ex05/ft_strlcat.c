/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:28:34 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/13 18:31:34 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j] && j < size)
		j++;
	while (src[i] && size && j + i < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j < size)
		dest[j + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}
