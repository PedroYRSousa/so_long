/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 00:18:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/08 10:30:18 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	clear_buffer(t_file **root)
{
	t_file	*aux;

	aux = *root;
	while (aux)
	{
		free(aux->buffer);
		aux->buffer = NULL;
		aux = aux->next;
		free(*root);
		*root = aux;
	}
	return (0);
}

void	remove_file(t_file **root, t_file **file)
{
	t_file	*aux;

	if (file && *file && root)
	{
		free((*file)->buffer);
		(*file)->buffer = NULL;
		if (*root == *file)
			*root = (*file)->next;
		else
		{
			aux = *root;
			while (aux->next != *file)
				aux = aux->next;
			aux->next = (*file)->next;
		}
		free(*file);
		*file = NULL;
	}
}

t_file	*create_file(int fd, t_file **root)
{
	t_file	*aux;
	t_file	*new_file;

	new_file = (t_file *)malloc(sizeof(t_file));
	if (new_file == NULL)
		return (NULL);
	new_file->fd = fd;
	new_file->buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (new_file->buffer == NULL)
	{
		free(new_file);
		return (NULL);
	}
	new_file->index = 0;
	new_file->next = NULL;
	if (*root == NULL)
		*root = new_file;
	else
	{
		aux = *root;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new_file;
	}
	return (new_file);
}
