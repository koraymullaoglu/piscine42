/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:28:36 by femullao          #+#    #+#             */
/*   Updated: 2024/02/10 14:09:08 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tmp;

	tmp = nb;
	while (1 < power)
	{
		tmp *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (tmp);
}
