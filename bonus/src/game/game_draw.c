/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_draw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:41:37 by user42            #+#    #+#             */
/*   Updated: 2021/10/23 03:37:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	check_collision_evil(t_evil evil, t_player player)
{
	int	x;
	int	y;

	x = player.x + (SPRITE_SIZE / 2);
	y = player.y + (SPRITE_SIZE / 2);
	if ((x >= evil.x && y >= evil.y)
		&& (x <= evil.x + SPRITE_SIZE && y >= evil.y)
		&& (x >= evil.x && y <= evil.y + SPRITE_SIZE)
		&& (x <= evil.x + SPRITE_SIZE && y <= evil.y + SPRITE_SIZE))
		system_get()->exit();
}

static void	show_moves(void *mlx, void *win, t_game game)
{
	char	*moves;

	moves = ft_itoa(game.player.count_moves);
	mlx_string_put(mlx,
		win,
		12, 12, 0x00FF0000,
		"Moves");
	mlx_string_put(mlx,
		win,
		10, 10, 0x0000FF00,
		"Moves");
	mlx_string_put(mlx,
		win,
		52, 12, 0x00FF0000,
		moves);
	mlx_string_put(mlx,
		win,
		50, 10, 0x0000FF00,
		moves);
	moves = (char *)ft_free_p((void *)moves);
}

int	game_draw(t_game *game)
{
	void	*mlx;
	void	*win;

	view_item_redraw(&game->view);
	view_exit_redraw(&game->view);
	mlx = system_get()->mlx;
	win = game->view.win;
	mlx_clear_window(mlx, game->view.win);
	if (game->evil.sprites)
	{
		check_collision_evil(game->evil, game->player);
		evil_move(&game->evil);
		check_collision_evil(game->evil, game->player);
	}
	view_bg_on_layer(&game->view);
	if (game->evil.sprites)
		view_draw_evil(&game->view, game->evil);
	view_draw_player(&game->view, game->player);
	mlx_put_image_to_window(mlx, win, game->view.layer.img, 0, 0);
	show_moves(mlx, win, *game);
	return (0);
}
