/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:57:29 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/30 12:53:06 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*_src;

	if (!dst || !src)
		return (0);
	_src = (const char *)src;
	if (size > 0)
	{
		while (size-- > 1 && *_src)
			*(dst++) = *(_src++);
		*dst = '\0';
	}
	return (ft_strlen(src));
}
