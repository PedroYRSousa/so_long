/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 04:18:00 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:42:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

static int	check_collision(t_player *player, int x, int y, char key)
{
	t_element	*element;

	x += SPRITE_SIZE / 2;
	y += SPRITE_SIZE / 2;
	if (key == DOWN)
		y += SPRITE_SIZE / 4;
	element = &map_get()->elements[y / SPRITE_SIZE][x / SPRITE_SIZE];
	if (element->type == WALL)
		return (FALSE);
	if (element->type == ITEM)
	{
		if (!element->index_sprite)
			player->count_item++;
		element->index_sprite = 1;
	}
	if (element->type == EXIT)
	{
		if (player->count_item == map_get()->count_item)
			system_get()->exit();
	}
	return (TRUE);
}

static void	change_animation(t_player *player, int x, int y, char key)
{
	int	index_idle;
	int	index_sprite;

	if (player->x == x && player->y == y)
		player->index_sprite++;
	else
		player->index_sprite = -1;
	index_sprite = player->index_sprite;
	if (key == UP)
		index_idle = 3;
	if (key == LEFT)
		index_idle = 9;
	if (key == DOWN)
		index_idle = 0;
	if (key == RIGHT)
		index_idle = 6;
	if (index_sprite > index_idle + 2 || index_sprite < index_idle)
		player->index_sprite = index_idle;
}

void	player_move(t_player *player, char key)
{
	int	x;
	int	y;

	x = player->x;
	y = player->y;
	if (key == UP)
		y -= SPEED;
	if (key == LEFT)
		x -= SPEED;
	if (key == DOWN)
		y += SPEED;
	if (key == RIGHT)
		x += SPEED;
	if (check_collision(player, x, y, key))
	{
		player->x = x;
		player->y = y;
		player->count_moves++;
		ft_putnbr_fd(player->count_moves, 1);
		ft_putchar_fd(10, 1);
	}
	change_animation(player, x, y, key);
}
