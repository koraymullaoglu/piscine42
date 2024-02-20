/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:28:43 by femullao          #+#    #+#             */
/*   Updated: 2024/01/27 17:26:49 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swp;
		i++;
	}
}
