/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_draw_evil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:52:47 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:24:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_draw_evil(t_view *view, t_evil evil)
{
	int	pos_x;
	int	pos_y;

	pos_x = evil.x;
	pos_y = evil.y;
	img_add_img(&view->layer,
		evil.sprites[evil.index_sprite],
		pos_x,
		pos_y);
}
