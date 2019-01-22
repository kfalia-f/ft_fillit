/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 16:29:49 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 15:14:37 by kfalia-f         ###   ########.fr       */
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


int		ft_alg(int **map, int n)
{
	int		mapsize;
	char	**result;
	int		i;

	i = 0;
	mapsize = ft_mapmin(n);
	result = ft_memalloc2(mapsize, mapsize);
	ft_output(result);
	return (0);
}
