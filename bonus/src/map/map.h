/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:50:16 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 13:05:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <fcntl.h>
# include "../system/system.h"
# include "../element/element.h"
# include "../../utils/utils.h"
# include "../../utils/LIBFT/GNL/get_next_line.h"

typedef struct s_map
{
	int			w;
	int			h;
	int			count_item;
	int			count_exit;
	t_element	**elements;
}	t_map;

t_map	*map_get(void);
void	map_destroy(void);
void	map_update_exit(void);
void	map_load(char *map_path);

#endif
