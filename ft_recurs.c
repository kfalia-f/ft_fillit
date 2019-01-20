/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:07:02 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/19 19:25:09 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_recurs(char *map, char **result, int x, int y, int mapsize)
{
	if (ft_checkspot(map, result, x, y) == 0)
	{
		if (x < mapsize)
			ft_recurs(map, result, x + 1, y, mapsize);
		else if (y < mapsize)
			ft_recurs(map, result, 0, y + 1, mapsize);
//		else
//		{
//			ft_mass2del(result);
//			result = ft_memalloc2(mapsize + 1, mapsize + 1);
//			ft_recurs(map, result, 0, 0, mapsize + 1);
//		}
	}
	else
		ft_touch(map, &result, x, y);
	return (1);
}
