/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_paths.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:56:40 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 17:34:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sprites.h"

char	*sprites_wall_paths(int index)
{
	if (index == 0)
		return ("./sprites/wall_0.xpm");
	return (NULL);
}

char	*sprites_floor_paths(int index)
{
	if (index == 0)
		return ("./sprites/floor_0.xpm");
	return (NULL);
}

char	*sprites_exit_paths(int index)
{
	if (index == 0)
		return ("./sprites/exit_0.xpm");
	if (index == 1)
		return ("./sprites/exit_1.xpm");
	return (NULL);
}

char	*sprites_item_paths(int index)
{
	if (index == 0)
		return ("./sprites/item_0.xpm");
	if (index == 1)
		return ("./sprites/item_1.xpm");
	return (NULL);
}

char	*sprites_player_paths(int index)
{
	if (index == 0)
		return ("./sprites/player_0.xpm");
	if (index == 1)
		return ("./sprites/player_1.xpm");
	if (index == 2)
		return ("./sprites/player_2.xpm");
	if (index == 3)
		return ("./sprites/player_3.xpm");
	if (index == 4)
		return ("./sprites/player_4.xpm");
	if (index == 5)
		return ("./sprites/player_5.xpm");
	if (index == 6)
		return ("./sprites/player_6.xpm");
	if (index == 7)
		return ("./sprites/player_7.xpm");
	if (index == 8)
		return ("./sprites/player_8.xpm");
	if (index == 9)
		return ("./sprites/player_9.xpm");
	if (index == 10)
		return ("./sprites/player_10.xpm");
	if (index == 11)
		return ("./sprites/player_11.xpm");
	return (NULL);
}
