/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:36:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 13:32:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	handle_exit(void)
{
	char	have_error;

	get_next_line(-1, NULL);
	have_error = system_get()->have_error;
	if (system_get()->game)
		game_destroy((t_game *)system_get()->game);
	map_destroy();
	sprites_destroy();
	system_destroy();
	exit(have_error);
	return (0);
}

int	main(int argc, char **args)
{
	t_game	game;

	system_get()->game = NULL;
	system_get()->exit = handle_exit;
	if (argc < 2)
		system_erro(ERROR_NO_MAP_PROVIDED);
	map_load(args[1]);
	system_get()->game = &game;
	game_init(&game);
	mlx_loop(system_get()->mlx);
	return (0);
}
