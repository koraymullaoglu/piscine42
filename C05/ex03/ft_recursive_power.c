/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:47:24 by femullao          #+#    #+#             */
/*   Updated: 2024/02/10 14:13:22 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
