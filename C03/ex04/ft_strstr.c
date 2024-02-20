/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:05:39 by femullao          #+#    #+#             */
/*   Updated: 2024/01/31 01:16:55 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
