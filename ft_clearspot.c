/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearspot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:14:40 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 16:45:08 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_clearspot(int *map, char **result, int flag)
{
	int co;

	co = 0;
	while (co < 4)
	{
		result[map[co]][map[co + 4]] = '.';
		map[co] = map[co] - map[9];
		map[co + 4] = map[co + 4] - map[10];
		if (flag == 1)
			map[10] += 1;
		else
		{
			map[10] = 0;
			map[9] = 0;
		}
		co++;
	}
}
