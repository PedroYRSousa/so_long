/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:15:42 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/29 10:53:08 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*_src;
	char		*_dest;

	if (dest == src)
		return (dest);
	_src = (const char *)src;
	_dest = (char *)dest;
	while (n-- > 0)
		*(_dest++) = *(_src++);
	return (dest);
}
