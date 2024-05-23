/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_erro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:26:50 by user42            #+#    #+#             */
/*   Updated: 2021/10/23 03:56:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "system.h"

static char	*code_str(int code)
{
	if (code == ERROR_NO_MAP_PROVIDED)
		return ("Error no map provided.");
	if (code == ERROR_NO_MAP_MALFORMAT)
		return ("Error map malformat.");
	if (code == ERROR_MUST_HAVE_A_PLAYER)
		return ("Error map must have a player.");
	if (code == ERROR_MAP_NOT_WALLED)
		return ("Error the map must be between walls.");
	if (code == ERROR_MUST_HAVE_A_EXIT)
		return ("Error map must have a exit.");
	if (code == ERROR_MUST_HAVE_A_ITEM)
		return ("Error map must have a item.");
	if (code == ERROR_UNKNOWN_KEY)
		return ("Error map have a unknown key.");
	return ("Error no maped.");
}

void	system_erro(int code)
{
	ft_putstr_fd(HEADER, 2);
	ft_putendl_fd(code_str(code), 2);
	system_get()->have_error = 1;
	system_get()->exit();
}
