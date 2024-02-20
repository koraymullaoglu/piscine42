/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:14:37 by femullao          #+#    #+#             */
/*   Updated: 2024/02/13 16:03:20 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total_length(int sz, char **strs, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (i < sz)
	{
		while (strs[i][j++])
			total++;
		j = 0;
		while (sep[j++] && i < sz - 1)
			total++;
		j = 0;
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_total_length(size, strs, sep) + 1));
	if (size == 0)
		return (str);
	while (i < size)
	{
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}
