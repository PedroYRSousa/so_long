/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_draw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 03:41:37 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:49:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	game_draw(t_game *game)
{
	void	*mlx;
	void	*img;
	void	*win;

	mlx_clear_window(system_get()->mlx, game->view.win);
	view_draw_player(&game->view, game->player);
	mlx = system_get()->mlx;
	img = game->view.bg.img;
	win = game->view.win;
	mlx_put_image_to_window(mlx, win, img, 0, 0);
	return (0);
}
