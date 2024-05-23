/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:12:57 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/30 12:08:01 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	size_t			size_str;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	index = 0;
	size_str = ft_strlen(s);
	new_str = (char *)ft_calloc(size_str + 1, 1);
	if (new_str)
	{
		while (*s)
		{
			new_str[index] = f(index, *s);
			index++;
			s++;
		}
	}
	return (new_str);
}
