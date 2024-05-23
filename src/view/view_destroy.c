/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:50:17 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:23:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"

void	view_destroy(t_view *view)
{
	img_destroy(&view->bg);
	if (view->win)
		mlx_destroy_window(system_get()->mlx, view->win);
}
