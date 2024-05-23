/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:55:02 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 17:34:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sprites.h"

static t_img	*add_img(t_img *i, char *path, char count)
{
	t_img	*aux;
	int		index;
	void	*mlx;
	void	*_img;

	aux = i;
	i = (t_img *)ft_calloc(count + 1, sizeof (t_img));
	index = 0;
	if (aux)
	{
		while (index < count)
		{
			i[index] = aux[index];
			index++;
		}
		aux = (t_img *)ft_free_p((void *)aux);
	}
	mlx = system_get()->mlx;
	_img = mlx_xpm_file_to_image(mlx, path, &(i[index]).w, &(i[index]).h);
	img_init(&i[index], _img);
	return (i);
}

static t_img	*load(t_img *i, char *(*paths)(int index))
{
	int		index;
	char	*path;

	path = "";
	index = 0;
	while (path)
	{
		path = paths(index);
		if (path)
		{
			i = add_img(i, path, index);
			index++;
		}
	}
	return (i);
}

t_sprites	*sprites_get(void)
{
	static t_sprites	sprites;

	if (!sprites.wall)
		sprites.wall = load(sprites.wall, sprites_wall_paths);
	if (!sprites.exit)
		sprites.exit = load(sprites.exit, sprites_exit_paths);
	if (!sprites.item)
		sprites.item = load(sprites.item, sprites_item_paths);
	if (!sprites.floor)
		sprites.floor = load(sprites.floor, sprites_floor_paths);
	if (!sprites.player)
		sprites.player = load(sprites.player, sprites_player_paths);
	if (!sprites.evil)
		sprites.evil = load(sprites.evil, sprites_evil_paths);
	return (&sprites);
}
