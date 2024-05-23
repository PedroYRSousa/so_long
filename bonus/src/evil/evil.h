/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evil.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 18:45:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVIL_H
# define EVIL_H

# include "../img/img.h"
# include "../map/map.h"
# include "../system/system.h"
# include "../sprites/sprites.h"

# define SPEED_EVIL 16
# define UP_EVIL 0x0
# define LEFT_EVIL 0x1
# define DOWN_EVIL 0x2
# define RIGHT_EVIL 0x3

typedef struct s_evil
{
	int		x;
	int		y;
	int		index_sprite;
	t_img	*sprites;
}	t_evil;

t_evil	evil_init(int x, int y);
void	evil_move(t_evil *evil);

#endif
