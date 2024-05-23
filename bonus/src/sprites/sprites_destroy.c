/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:57:59 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:42:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sprites.h"

static char	destroy(t_img *i, char *(*paths)(int index))
{
	int	index;

	if (i)
	{
		index = 0;
		while (paths(index))
		{
			mlx_destroy_image(system_get()->mlx, i[index].img);
			index++;
		}
		return (TRUE);
	}
	return (FALSE);
}

void	sprites_destroy(void)
{
	t_sprites	*s;

	s = sprites_get();
	if (destroy(s->wall, sprites_wall_paths))
		s->wall = (t_img *)ft_free_p((void *)s->wall);
	if (destroy(s->exit, sprites_exit_paths))
		s->exit = (t_img *)ft_free_p((void *)s->exit);
	if (destroy(s->floor, sprites_floor_paths))
		s->floor = (t_img *)ft_free_p((void *)s->floor);
	if (destroy(s->item, sprites_item_paths))
		s->item = (t_img *)ft_free_p((void *)s->item);
	if (destroy(s->player, sprites_player_paths))
		s->player = (t_img *)ft_free_p((void *)s->player);
	if (destroy(s->evil, sprites_player_paths))
		s->evil = (t_img *)ft_free_p((void *)s->evil);
}
