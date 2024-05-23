/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 00:04:44 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/06/01 17:41:59 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_item;

	if (!f || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_item = ft_lstnew(f(lst->content));
		if (!new_item)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_item);
		lst = lst->next;
	}
	return (new_lst);
}
