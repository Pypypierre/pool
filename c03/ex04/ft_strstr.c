/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:42:10 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/15 10:07:32 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	cnt;
	int	rt;

	n = 0;
	cnt = 0;
	if (*to_find == '\0')
		return (str);
	while (str[n] != '\0')
	{
		rt = n;
		cnt = 0;
		while (str[n] == to_find[cnt] && to_find[cnt] != '\0')
		{
			cnt++;
			n++;
		}
		if (to_find[cnt] == '\0')
			return (&str[rt]);
		else
			n = rt + 1;
	}
	return (0);
}
