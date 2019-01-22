/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkspot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:05:06 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 21:45:00 by koparker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_checkspot(int *map, char **result, int mapsize)
{
	int		co;

	co = 0;
	while (co < 4)
	{
		if ((map[co] + map[9] < mapsize) && (mapsize > map[co + 4] + map[10]))
		{
			if (result[map[co] + map[9]][map[co + 4] + map[10]] == '.')
			{
				co++;
				continue ;
			}
			else
				co = 10;
		}
		else
			return (0);
	}
	if (co == 4)
		return (1);
	return (0);
}
