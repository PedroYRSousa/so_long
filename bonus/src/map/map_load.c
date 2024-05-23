/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:13:08 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 13:48:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static t_element	*add_elements(t_map *m, char *line)
{
	int			size;
	int			index;
	t_element	*elements;

	size = ft_strlen(line);
	if (m->w && size != m->w)
	{
		line = (char *)ft_free_p((void *)line);
		system_erro(ERROR_NO_MAP_MALFORMAT);
	}
	m->w = size;
	elements = (t_element *)ft_calloc(size, sizeof(t_element));
	index = 0;
	while (index < size)
	{
		if (line[index] == ITEM)
			m->count_item++;
		if (line[index] == EXIT)
			m->count_exit++;
		elements[index] = element_init(line[index], index, m->h);
		index++;
	}
	line = (char *)ft_free_p((void *)line);
	return (elements);
}

static void	add_line(t_map *m, char *line)
{
	t_element	**aux;
	int			index;

	aux = m->elements;
	m->elements = (t_element **)ft_calloc(m->h + 1, sizeof(t_element *));
	index = 0;
	if (aux)
	{
		while (index < m->h)
		{
			m->elements[index] = aux[index];
			index++;
		}
		free (aux);
		aux = NULL;
	}
	m->elements[index] = add_elements(m, line);
	m->h++;
}

static void	check_map(t_map m)
{
	int	x;
	int	y;

	if ((m.w == m.h) || (m.w < 5) || (m.h < 3))
		system_erro(ERROR_NO_MAP_MALFORMAT);
	if (m.count_exit <= 0)
		system_erro(ERROR_MUST_HAVE_A_EXIT);
	if (m.count_item <= 0)
		system_erro(ERROR_MUST_HAVE_A_ITEM);
	y = 0;
	while (y < m.h)
	{
		x = 0;
		while (x < m.w)
		{
			if (((x == 0 || x == m.w - 1) && m.elements[y][x].type != WALL)
				|| ((y == 0 || y == m.h - 1) && m.elements[y][x].type != WALL))
				system_erro(ERROR_MAP_NOT_WALLED);
			x++;
		}
		y++;
	}
}

void	map_load(char *map_path)
{
	int		fd;
	t_map	*m;
	char	*line;

	m = map_get();
	m->h = 0;
	m->w = 0;
	m->elements = NULL;
	fd = open(map_path, O_RDONLY);
	if (fd == -1)
		system_perro();
	while (get_next_line(fd, &line))
		add_line(m, line);
	if (line)
		add_line(m, line);
	check_map(*m);
}
