/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 12:51:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_H
# define VIEW_H

# include "../map/map.h"
# include "../img/img.h"
# include "../player/player.h"

typedef struct s_view
{
	t_img	bg;
	void	*win;
}	t_view;

void	view_init(t_view *view);
void	view_destroy(t_view *view);
void	view_build(t_view *view);
void	view_redraw(t_view *view, int x, int y);
void	view_exit_redraw(t_view *view);
void	view_draw_player(t_view *view, t_player player);

#endif
