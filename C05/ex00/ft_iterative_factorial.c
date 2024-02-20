/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:47:36 by femullao          #+#    #+#             */
/*   Updated: 2024/02/07 15:53:58 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
