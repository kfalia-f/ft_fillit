/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 16:29:49 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/21 16:38:11 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_mapmin(int n)
{
	int k;

	k = 2;
	while (k * k <= n * 4)
		k++;
	return (k);
}


int		ft_alg(char **map, int n)
{
	int		mapsize;
	int		x;
	int		y;
	char	**result;
	int		i;

	x = 0;
	y = 0;
	i = 0;
	mapsize = ft_mapmin(n);
	result = ft_memalloc2(mapsize, mapsize);
	while (i < n)
	{
		if (ft_recurs(map[i], result, x, y, mapsize) == 1)
			i++;
		else if (i > 0)
		{
			i--;
			ft_clearspot(map[i], result);
		}
		else
		{
			ft_mass2del(result);
			mapsize++;
			result = ft_memalloc2(mapsize, mapsize);
			i = 0;
		}
	}
	ft_output(result);
	return (0);
}
