/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:06:05 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/22 13:56:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_free_p(void *p)
{
	free (p);
	return (p = NULL);
}

void	**ft_free_m(void **m)
{
	int	index;

	index = 0;
	while (m[index])
	{
		ft_free_p(m[index]);
		index++;
	}
	free (m);
	return (m = NULL);
}
