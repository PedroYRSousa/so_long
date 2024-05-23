/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 12:47:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "../view/view.h"
# include "../player/player.h"

# define ESC 65307

typedef struct s_game
{
	t_view		view;
	t_player	player;
}	t_game;

void	game_init(t_game *game);
void	game_destroy(t_game *game);
int		game_draw(t_game *game);

#endif
