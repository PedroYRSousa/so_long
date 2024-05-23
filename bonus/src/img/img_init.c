/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:28:30 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/18 18:29:46 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "img.h"

void	img_init(t_img *i, void *img)
{
	i->img = img;
	i->addr = mlx_get_data_addr(img, &i->bpp, &i->size_line, &i->endian);
}
