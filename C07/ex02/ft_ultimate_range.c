/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:09:51 by femullao          #+#    #+#             */
/*   Updated: 2024/02/13 17:20:26 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*buf;
	int	i;

	i = 0;
	if (max > min)
		len = max - min;
	else
	{
		*range = 0;
		return (0);
	}
	buf = malloc(sizeof(int) * len);
	if (!buf)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	while (i < len)
	{
		buf[i] = min + i;
		i++;
	}
	return (len);
}
