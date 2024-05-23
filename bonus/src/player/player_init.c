/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:19:12 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:40:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_init(t_player *player)
{
	int		x;
	int		y;

	y = 0;
	while (y < map_get()->h)
	{
		x = 0;
		while (x < map_get()->w)
		{
			if (map_get()->elements[y][x].type == PLAYER)
			{
				player->count_moves = 0;
				player->count_item = 0;
				player->index_sprite = 0;
				player->x = x * SPRITE_SIZE;
				player->y = y * SPRITE_SIZE;
				player->sprites = sprites_get()->player;
				return ;
			}
			x++;
		}
		y++;
	}
	system_erro(ERROR_MUST_HAVE_A_PLAYER);
}
