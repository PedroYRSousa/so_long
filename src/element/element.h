/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/20 12:54:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEMENT_H
# define ELEMENT_H

# include "../sprites/sprites.h"

# define EXIT 'E'
# define ITEM 'C'
# define WALL '1'
# define FLOOR '0'
# define PLAYER 'P'

typedef struct s_element
{
	char	type;
	int		x;
	int		y;
	int		index_sprite;
	t_img	*sprites;
}	t_element;

t_element	element_init(char type, int x, int y);

#endif
