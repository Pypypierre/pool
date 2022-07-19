/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:54:33 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/18 14:04:03 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	if (power > 1)
		result *= ft_recursive_power(nb, (power - 1));
	return (result);
}
