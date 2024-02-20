/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:20:08 by femullao          #+#    #+#             */
/*   Updated: 2024/01/29 01:15:59 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (c == 1)
			{
				str[i] -= 32;
			}
			c = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
		{
			c = 0;
		}
		else
			c = 1;
		i++;
	}
	return (str);
}
