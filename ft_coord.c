/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coord.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 18:24:35 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/21 15:23:20 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_arrey(int n)
{
	int		i;
	char	**a;

	i = 0;
	if ((a = (char **)malloc(sizeof(char *) * n)) == NULL)
		ft_error(4);
	while (i < n)
	{
		if ((a[i] = (char *)malloc(sizeof(char) * 9)) == NULL)
			ft_error(4);
		i++;
	}
	return (a);
}

void	ft_zap(char **map, char **a, int i, int k)
{
	int j;
	int co;

	co = 0;
	while (k < i + 4)
	{
		j = 0;
		while (map[k][j])
		{
			if (map[k][j] == '#')
			{
				a[i / 5][co] = k - i + '0';
				a[i / 5][co + 4] = j + '0';
				co++;
			}
			j++;
		}
		k++;
	}
}

void	ft_coord(char **map, int n)
{
	char	**a;
	int		i;

	i = 0;
	a = ft_arrey(n);
	while (i < (n * 5 - 1))
	{
		ft_zap(map, a, i, i);
		a[i / 5][8] = 'A' + i / 5;
		i += 5;
	}
	ft_alg(a, n);
}
