/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:30:10 by femullao          #+#    #+#             */
/*   Updated: 2024/02/03 19:54:02 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	a = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0' && (a < nb))
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
