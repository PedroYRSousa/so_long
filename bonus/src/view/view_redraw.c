/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_redraw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:30:38 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:31:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_redraw(t_view *view, int x, int y)
{
	int		index_sprite;
	t_img	sprite;

	index_sprite = map_get()->elements[y][x].index_sprite;
	sprite = map_get()->elements[y][x].sprites[index_sprite];
	img_add_img(&view->bg, sprite, x * SPRITE_SIZE, y * SPRITE_SIZE);
}
