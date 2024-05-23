/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:15:25 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/31 14:35:10 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = (const char *)s;
	while (n-- > 0)
	{
		if (*str == (c % 256))
			return ((void *)(str));
		else
			str++;
	}
	return (NULL);
}
