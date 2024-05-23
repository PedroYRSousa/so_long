/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:55 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 13:49:11 by user42           ###   ########.fr       */
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
		game_draw(game);
		if (game->player.count_item == map_get()->count_item)
		{
			map_update_exit();
			view_exit_redraw(&game->view);
			view_draw_player(&game->view, game->player);
		}
	}
	if (key_code == ESC)
		system_get()->exit();
	return (0);
}

void	game_init(t_game *game)
{
	view_init(&game->view);
	player_init(&game->player);
	game_draw(game);
	mlx_do_key_autorepeaton(system_get()->mlx);
	mlx_expose_hook(game->view.win, game_draw, game);
	mlx_hook(game->view.win, 02, (1L << 0), handle_controller, game);
	mlx_hook(game->view.win, 17, 1L << 17, system_get()->exit, NULL);
}
