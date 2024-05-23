/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_add_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:41:41 by user42            #+#    #+#             */
/*   Updated: 2021/10/21 04:07:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "img.h"

static void	set_color(t_img *i, int x, int y, int color)
{
	char	*dot;

	if (color != TRANSPARENCY)
	{
		dot = i->addr + (y * i->size_line + x * (i->bpp / 8));
		*(unsigned int *)dot = color;
	}
}

static int	get_color(t_img i, int x, int y)
{
	char	*dot;

	dot = i.addr + (y * i.size_line + x * (i.bpp / 8));
	return (*(unsigned int *)dot);
}

void	img_add_img(t_img *i, t_img source, int pos_x, int pos_y)
{
	int	x;
	int	y;
	int	color;

	y = 0;
	while (y < SPRITE_SIZE)
	{
		x = 0;
		while (x < SPRITE_SIZE)
		{
			color = get_color(source, x, y);
			set_color(i, pos_x + x, pos_y + y, color);
			x++;
		}
		y++;
	}
}
