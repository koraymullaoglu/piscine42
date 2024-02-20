/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:55:19 by femullao          #+#    #+#             */
/*   Updated: 2024/02/13 15:06:55 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*b;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	b = malloc(sizeof(char) * (len + 1));
	if (!b)
	{
		return (0);
	}
	while (src[i])
	{
		b[i] = src[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
