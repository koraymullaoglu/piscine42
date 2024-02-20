/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:06:38 by femullao          #+#    #+#             */
/*   Updated: 2024/02/13 15:57:01 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buf;
	int	len;
	int	i;

	i = 0;
	if (min < max)
	{
		len = max - min;
	}
	else
		return (0);
	buf = malloc(sizeof(int) * len);
	if (!buf)
	{
		return (0);
	}
	while (i < len)
	{
		buf[i] = min;
		min++;
		i++;
	}
	return (buf);
}
