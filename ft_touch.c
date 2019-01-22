/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:42:30 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 15:16:33 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_touch(int *map, char **result)
{
	int		co;

	co = 0;
	while (co < 4)
	{
		result[map[co] + map[9]][map[co + 4] + map[10]] = map[8];
		map[co] = map[co] + map[9];
		map[co + 4] = map[co + 4] + map[10];
		co++;
	}
}
