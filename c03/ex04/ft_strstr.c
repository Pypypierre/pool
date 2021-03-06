/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:42:10 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/20 09:56:38 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	cnt;

	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		cnt = 0;
		while (str[n + cnt] == to_find[cnt] && to_find[cnt] != '\0')
		{
			cnt++;
		}
		if (to_find[cnt] == '\0')
			return (&str[n]);
		n++;
	}
	return (0);
}
