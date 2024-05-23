/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 12:57:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRITES_H
# define SPRITES_H

# include <stdlib.h>
# include "../img/img.h"
# include "../system/system.h"
# include "../../mlx/mlx.h"
# include "../../utils/utils.h"
# include "../../utils/LIBFT/libft.h"

typedef struct s_sprites
{
	t_img	*wall;
	t_img	*item;
	t_img	*exit;
	t_img	*floor;
	t_img	*player;
}	t_sprites;

t_sprites	*sprites_get(void);
void		sprites_destroy(void);
char		*sprites_player_paths(int index);
char		*sprites_floor_paths(int index);
char		*sprites_wall_paths(int index);
char		*sprites_exit_paths(int index);
char		*sprites_item_paths(int index);

#endif
