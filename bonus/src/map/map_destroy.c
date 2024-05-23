/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:05:23 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:26:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_destroy(void)
{
	int		y;
	t_map	*m;

	y = 0;
	m = map_get();
	if (m->elements)
	{
		while (y < m->h)
		{
			m->elements[y] = (t_element *)ft_free_p((void *)m->elements[y]);
			y++;
		}
		m->elements = (t_element **)ft_free_m((void **)m->elements);
	}
}
