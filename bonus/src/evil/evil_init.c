/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evil_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:19:12 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 17:45:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evil.h"

t_evil	evil_init(int x, int y)
{
	t_evil	e;

	e.index_sprite = 0;
	e.x = x * SPRITE_SIZE;
	e.y = y * SPRITE_SIZE;
	e.sprites = sprites_get()->evil;
	return (e);
}
