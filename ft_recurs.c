/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:07:02 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 20:55:04 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_recurs(int **map, char **result, int mapsize, int fn)
{
	if (map[fn] == NULL)
		return (1);
	while (map[fn] != NULL)
	{
		if (ft_checkspot(map[fn], result, mapsize) == 1)
		{
			ft_touch(map[fn], result);
			ft_recurs(map, result, mapsize, fn + 1);
			break ;
		}
		else if (map[fn][10] + map[fn][4] < mapsize)
			map[fn][10] += 1;
		else if (map[fn][9] + map[fn][0] < mapsize)
		{
			map[fn][10] = 0;
			map[fn][9] += 1;
		}
		else if (fn > 0)
		{
			fn--;
			ft_clearspot(map[fn], result, 1);
		}
		else
			break ;
	}
	return (0);
}
