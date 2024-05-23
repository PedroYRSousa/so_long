/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_bg_on_layer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:15:55 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:34:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_bg_on_layer(t_view *view)
{
	int	x;
	int	y;
	int	w;
	int	h;
	int	color;

	w = map_get()->w;
	h = map_get()->h;
	img_destroy(&view->layer);
	img_init(&view->layer, mlx_new_image(
			system_get()->mlx, w * SPRITE_SIZE, h * SPRITE_SIZE));
	y = 0;
	while (y < map_get()->h * SPRITE_SIZE)
	{
		x = 0;
		while (x < map_get()->w * SPRITE_SIZE)
		{
			color = img_get_color(view->bg, x, y);
			img_set_color(&view->layer, x, y, color);
			x++;
		}
		y++;
	}
}
