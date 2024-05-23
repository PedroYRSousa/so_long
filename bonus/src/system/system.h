/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/23 03:57:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYSTEM_H
# define SYSTEM_H

# include <stdio.h>
# include "../../../mlx/mlx.h"
# include "../../utils/utils.h"
# include "../../utils/LIBFT/libft.h"

# define HEADER "Error\n"
# define ERROR_NO_MAP_PROVIDED 0x0
# define ERROR_NO_MAP_MALFORMAT 0x1
# define ERROR_MUST_HAVE_A_PLAYER 0x2
# define ERROR_MAP_NOT_WALLED 0x3
# define ERROR_MUST_HAVE_A_EXIT 0x4
# define ERROR_MUST_HAVE_A_ITEM 0x5
# define ERROR_UNKNOWN_KEY 0x6

typedef struct s_system
{
	void	*mlx;
	void	*game;
	char	have_error;
	int		(*exit)(void);
}	t_system;

t_system	*system_get(void);
void		system_destroy(void);
void		system_perro(void);
void		system_erro(int code);

#endif
