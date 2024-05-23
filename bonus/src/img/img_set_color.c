/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_set_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:41:41 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:29:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "img.h"

void	img_set_color(t_img *i, int x, int y, int color)
{
	char	*dot;

	if (color != TRANSPARENCY)
	{
		dot = i->addr + (y * i->size_line + x * (i->bpp / 8));
		*(unsigned int *)dot = color;
	}
}
