/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_exit_redraw.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:34:55 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 12:36:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_exit_redraw(t_view *view)
{
	int		x;
	int		y;
	t_map	*m;

	m = map_get();
	y = 0;
	while (y < m->h)
	{
		x = 0;
		while (x < m->w)
		{
			if (m->elements[y][x].type == EXIT)
				view_redraw(view, x, y);
			x++;
		}
		y++;
	}
}
