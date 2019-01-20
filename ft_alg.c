/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 16:29:49 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/19 19:05:04 by kfalia-f         ###   ########.fr       */
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

	x = 0;
	y = 0;
	mapsize = ft_mapmin(n);
	result = ft_memalloc2(mapsize, mapsize);
	ft_recurs(*map, result, x, y, mapsize);
	while (map[x])
	{
		ft_putstr(map[x]);
		x++;
	}
	ft_output(&result);
	return (0);
}
