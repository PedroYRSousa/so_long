/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_draw_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:42:57 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 12:31:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

static void	redraw_bg(t_view *view, int pos_x, int pos_y)
{
	view_redraw(view, pos_x, pos_y);
	if (pos_x - 1 >= 0)
	{
		view_redraw(view, pos_x - 1, pos_y);
		if (pos_y - 1 >= 0)
			view_redraw(view, pos_x - 1, pos_y - 1);
		if (pos_y + 1 < map_get()->h)
			view_redraw(view, pos_x - 1, pos_y + 1);
	}
	if (pos_x + 1 < map_get()->w)
	{
		view_redraw(view, pos_x + 1, pos_y);
		if (pos_y - 1 >= 0)
			view_redraw(view, pos_x + 1, pos_y - 1);
		if (pos_y + 1 < map_get()->h)
			view_redraw(view, pos_x + 1, pos_y + 1);
	}
	if (pos_y - 1 >= 0)
		view_redraw(view, pos_x, pos_y - 1);
	if (pos_y + 1 < map_get()->h)
		view_redraw(view, pos_x, pos_y + 1);
}

void	view_draw_player(t_view *view, t_player player)
{
	int	pos_x;
	int	pos_y;

	pos_x = player.x;
	pos_y = player.y;
	redraw_bg(view, pos_x / SPRITE_SIZE, pos_y / SPRITE_SIZE);
	img_add_img(&view->bg, player.sprites[player.index_sprite], pos_x, pos_y);
}
