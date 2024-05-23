/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 08:16:42 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/31 14:40:02 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*output;

	output = NULL;
	while (*s)
	{
		if (*s == (c % 256))
			output = s;
		s++;
	}
	if (*s == (c % 256))
		output = s;
	return ((char *)output);
}
