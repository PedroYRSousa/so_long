/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_paths_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:56:40 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 17:33:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sprites.h"

char	*sprites_evil_paths(int index)
{
	if (index == 0)
		return ("./sprites/evil_0.xpm");
	if (index == 1)
		return ("./sprites/evil_1.xpm");
	if (index == 2)
		return ("./sprites/evil_2.xpm");
	if (index == 3)
		return ("./sprites/evil_3.xpm");
	if (index == 4)
		return ("./sprites/evil_4.xpm");
	if (index == 5)
		return ("./sprites/evil_5.xpm");
	if (index == 6)
		return ("./sprites/evil_6.xpm");
	if (index == 7)
		return ("./sprites/evil_7.xpm");
	if (index == 8)
		return ("./sprites/evil_8.xpm");
	if (index == 9)
		return ("./sprites/evil_9.xpm");
	if (index == 10)
		return ("./sprites/evil_10.xpm");
	if (index == 11)
		return ("./sprites/evil_11.xpm");
	return (NULL);
}
