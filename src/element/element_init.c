/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:50:37 by user42            #+#    #+#             */
/*   Updated: 2021/10/23 03:47:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "element.h"

static t_img	*get_sprites(char type)
{
	if (type != WALL
		&& type != EXIT
		&& type != ITEM
		&& type != PLAYER
		&& type != FLOOR)
		system_erro(ERROR_UNKNOWN_KEY);
	if (type == WALL)
		return (sprites_get()->wall);
	if (type == EXIT)
		return (sprites_get()->exit);
	if (type == ITEM)
		return (sprites_get()->item);
	return (sprites_get()->floor);
}

t_element	element_init(char type, int x, int y)
{
	t_element	e;

	e.x = x;
	e.y = y;
	e.type = type;
	e.index_sprite = 0;
	e.sprites = get_sprites(type);
	return (e);
}
