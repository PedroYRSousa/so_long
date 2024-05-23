/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evil_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 04:18:00 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 19:04:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evil.h"

static int	check_collision(int x, int y, char key)
{
	t_element	*element;

	x += SPRITE_SIZE / 2;
	y += SPRITE_SIZE / 2;
	if (key == DOWN_EVIL)
		y += SPRITE_SIZE / 4;
	element = &map_get()->elements[y / SPRITE_SIZE][x / SPRITE_SIZE];
	if (element->type == WALL)
		return (FALSE);
	return (TRUE);
}

static void	change_animation(t_evil *evil, int x, int y, char key)
{
	int	index_idle;
	int	index_sprite;

	if (evil->x == x && evil->y == y)
		evil->index_sprite++;
	else
		evil->index_sprite = -1;
	index_sprite = evil->index_sprite;
	if (key == UP_EVIL)
		index_idle = 3;
	if (key == LEFT_EVIL)
		index_idle = 9;
	if (key == DOWN_EVIL)
		index_idle = 0;
	if (key == RIGHT_EVIL)
		index_idle = 6;
	if (index_sprite > index_idle + 2 || index_sprite < index_idle)
		evil->index_sprite = index_idle;
}

void	evil_move(t_evil *evil)
{
	int		x;
	int		y;
	char	key;

	key = rand() % 0x4;
	x = evil->x;
	y = evil->y;
	if (key == UP_EVIL)
		y -= SPEED_EVIL;
	if (key == LEFT_EVIL)
		x -= SPEED_EVIL;
	if (key == DOWN_EVIL)
		y += SPEED_EVIL;
	if (key == RIGHT_EVIL)
		x += SPEED_EVIL;
	if (check_collision(x, y, key))
	{
		evil->x = x;
		evil->y = y;
	}
	change_animation(evil, x, y, key);
}
