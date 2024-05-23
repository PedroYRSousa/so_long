/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:55:42 by user42            #+#    #+#             */
/*   Updated: 2021/10/22 12:56:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "system.h"

void	system_destroy(void)
{
	mlx_destroy_display(system_get()->mlx);
	system_get()->mlx = ft_free_p(system_get()->mlx);
}
