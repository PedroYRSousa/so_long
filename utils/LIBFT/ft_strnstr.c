/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 07:19:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/31 15:40:15 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_l;

	size_l = ft_strlen(little);
	if (size_l == 0)
		return ((char *)big);
	if (size_l > ft_strlen(big))
		return (NULL);
	while (*big && len)
	{
		if (size_l > ft_strlen(big) || len < size_l)
			return (NULL);
		if (ft_strncmp(big, little, size_l) == 0 && len >= size_l)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
