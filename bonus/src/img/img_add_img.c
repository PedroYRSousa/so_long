/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_add_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:41:41 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:29:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "img.h"

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
			color = img_get_color(source, x, y);
			img_set_color(i, pos_x + x, pos_y + y, color);
			x++;
		}
		y++;
	}
}
