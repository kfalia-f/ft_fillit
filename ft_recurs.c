/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:07:02 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 15:41:43 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_recurs(int **map, char **result, int mapsize, int fn)
{
	if (ft_isdigit(map[fn][0]) == 0)
		return (1);
	if (ft_checkspot(map[fn], result, mapsize) == 1)
	{
		ft_touch(map[fn], result);
		ft_recurs(map, result, mapsize, fn + 1);
	}
	if (map[fn][10] < mapsize)
	{
		map[fn][10] += 1;
		ft_recurs(map, result, mapsize, fn);
	}
	if (map[fn][9] < mapsize)
	{
		map[fn][10] = 0;
		map[fn][9] += 1;
		ft_recurs(map, result, mapsize, fn);
	}
	if (fn > 0)
	{
		ft_clearspot(map[fn - 1], result, 1);
		ft_recurs(map, result, mapsize, fn - 1);
	}
	ft_clearspot(map, result, 0);
	return (0);
}
