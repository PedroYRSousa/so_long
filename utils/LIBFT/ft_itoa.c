/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:19:38 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/30 10:37:24 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_get_size(unsigned int n, int is_negative)
{
	unsigned int	size;

	size = 1;
	if (is_negative)
		size++;
	if (n == 0)
		size++;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static unsigned int	ft_get_number(int n, int *is_negative)
{
	if (n < 0)
	{
		*is_negative = TRUE;
		return ((unsigned int)(n * -1));
	}
	else
	{
		*is_negative = FALSE;
		return ((unsigned int)(n));
	}
}

char	*ft_itoa(int n)
{
	unsigned int	_n;
	unsigned int	size;
	char			*buffer;
	int				is_negative;

	_n = ft_get_number(n, &is_negative);
	size = ft_get_size(_n, is_negative);
	buffer = (char *)ft_calloc(size, sizeof(char));
	if (buffer)
	{
		if (is_negative)
			buffer[0] = '-';
		size -= 2;
		while (_n >= 10)
		{
			buffer[size--] = (char)(_n % 10 + '0');
			_n /= 10;
		}
		buffer[size] = (char)(_n + '0');
	}
	return (buffer);
}
