/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:55 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/23 03:37:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int	handle_controller(int key_code, t_game *game)
{
	if (key_code == UP
		|| key_code == LEFT
		|| key_code == DOWN
		|| key_code == RIGHT)
	{
		player_move(&game->player, key_code);
		if (game->player.count_item == map_get()->count_item)
			map_update_exit();
		game_draw(game);
	}
	if (key_code == ESC)
		system_get()->exit();
	return (0);
}

static void	evils_init(t_evil *evil)
{
	int		x;
	int		y;

	y = 0;
	evil->sprites = NULL;
	while (y < map_get()->h)
	{
		x = 0;
		while (x < map_get()->w)
		{
			if (map_get()->elements[y][x].type == EVIL)
			{
				*evil = evil_init(x, y);
				return ;
			}
			x++;
		}
		y++;
	}
}

void	game_init(t_game *game)
{
	view_init(&game->view);
	player_init(&game->player);
	evils_init(&game->evil);
	mlx_do_key_autorepeaton(system_get()->mlx);
	mlx_expose_hook(game->view.win, game_draw, game);
	mlx_hook(game->view.win, 02, (1L << 0), handle_controller, game);
	mlx_hook(game->view.win, 17, 1L << 17, system_get()->exit, NULL);
}
