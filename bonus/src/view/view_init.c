/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:10:38 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 21:23:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_init(t_view *view)
{
	int		w;
	int		h;
	void	*mlx;

	w = map_get()->w * 48;
	h = map_get()->h * 48;
	mlx = system_get()->mlx;
	view->win = mlx_new_window(system_get()->mlx, w, h, "So_long");
	img_init(&view->bg, mlx_new_image(mlx, w, h));
	img_init(&view->layer, mlx_new_image(mlx, w, h));
	view_build(view);
}
