/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 01:45:51 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/29 12:34:18 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size_s;
	int		count;
	char	*new_s;

	count = 0;
	size_s = ft_strlen(s);
	new_s = (char *)ft_calloc(size_s + 1, sizeof(char));
	if (new_s != NULL)
	{
		while (count < size_s)
		{
			new_s[count] = s[count];
			count++;
		}
	}
	return (new_s);
}
