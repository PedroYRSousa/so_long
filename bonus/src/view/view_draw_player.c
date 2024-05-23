/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_draw_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:42:57 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:11:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_draw_player(t_view *view, t_player player)
{
	int	pos_x;
	int	pos_y;

	pos_x = player.x;
	pos_y = player.y;
	img_add_img(&view->layer,
		player.sprites[player.index_sprite],
		pos_x,
		pos_y);
}
