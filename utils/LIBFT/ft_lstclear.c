/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:59:53 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/05/28 01:54:07 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (lst && del)
	{
		while (*lst != NULL)
		{
			del((*lst)->content);
			aux = *lst;
			*lst = aux->next;
			free(aux);
		}
		lst = NULL;
	}
}
