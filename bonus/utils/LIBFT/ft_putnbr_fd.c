/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:30:07 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/30 11:07:55 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_digit(unsigned int n, int fd)
{
	if (n > 0)
	{
		print_digit(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	_n;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		_n = n * -1;
	}
	else
		_n = n;
	print_digit(_n, fd);
}
