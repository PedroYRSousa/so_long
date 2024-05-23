/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:01:08 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 21:28:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMG_H
# define IMG_H

# include "../system/system.h"
# include "../../../mlx/mlx.h"

# define SPRITE_SIZE 48
# define TRANSPARENCY 0x00FF00

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		size_line;
	int		endian;
	int		w;
	int		h;
}	t_img;

void	img_init(t_img *i, void *img);
void	img_destroy(t_img *i);
void	img_add_img(t_img *i, t_img source, int pos_x, int pos_y);
void	img_set_color(t_img *i, int x, int y, int color);
int		img_get_color(t_img i, int x, int y);

#endif