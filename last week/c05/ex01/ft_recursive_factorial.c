/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pduhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:54:58 by pduhamel          #+#    #+#             */
/*   Updated: 2022/07/19 11:49:22 by pduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		nb = (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
