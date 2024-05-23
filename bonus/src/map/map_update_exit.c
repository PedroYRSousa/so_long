/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_update_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:26:26 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 12:32:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_update_exit(void)
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
				m->elements[y][x].index_sprite = 1;
			x++;
		}
		y++;
	}
}
