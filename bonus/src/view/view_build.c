/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_build.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:25:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_build(t_view *view)
{
	int		y;
	int		x;
	int		index_sprite;
	t_map	*m;
	t_img	source;

	m = map_get();
	y = 0;
	while (y < m->h)
	{
		x = 0;
		while (x < m->w)
		{
			index_sprite = m->elements[y][x].index_sprite;
			source = m->elements[y][x].sprites[index_sprite];
			img_add_img(&view->bg, source, x * SPRITE_SIZE, y * SPRITE_SIZE);
			x++;
		}
		y++;
	}
}
