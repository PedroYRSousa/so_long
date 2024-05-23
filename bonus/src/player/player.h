/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 13:40:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "../img/img.h"
# include "../map/map.h"
# include "../system/system.h"
# include "../sprites/sprites.h"

# define SPEED 4
# define UP 'w'
# define LEFT 'a'
# define DOWN 's'
# define RIGHT 'd'

typedef struct s_player
{
	int		x;
	int		y;
	int		count_item;
	int		index_sprite;
	int		count_moves;
	t_img	*sprites;
}	t_player;

void	player_init(t_player *player);
void	player_move(t_player *player, char key);

#endif
