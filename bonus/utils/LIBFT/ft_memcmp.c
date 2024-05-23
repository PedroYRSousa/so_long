/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:36:25 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/29 09:32:33 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*_s1;
	const char	*_s2;

	_s1 = (const char *)s1;
	_s2 = (const char *)s2;
	while (n-- > 0)
	{
		if (*_s1 != *_s2)
			return ((unsigned char)*_s1 - (unsigned char)*_s2);
		_s1++;
		_s2++;
	}
	return (0);
}
