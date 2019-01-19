/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearspot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:14:40 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/14 17:18:50 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_clearspot(char **map, char **result, int fn, int x, int y)
{
	int co;

	co = 0;
	while (co < 4)
	{
		result[map[fn][co] + y][map[fn][co + 4] + x] = '.';
		co++;
	}
}
