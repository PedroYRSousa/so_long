/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 07:05:17 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/29 11:00:32 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if ((unsigned char)(*s1) != (unsigned char)(*s2))
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		n--;
		s2++;
		s1++;
	}
	if (n != 0 && (unsigned char)(*s1) != (unsigned char)(*s2))
		return ((unsigned char)(*s1) - (unsigned char)(*s2));
	return (0);
}
