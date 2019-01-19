/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkspot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:05:06 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/15 19:44:54 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_checkspot(char *map, char **result, int x, int y)
{
	int		co;

	co = 0;
	while (co < 4)
	{
		if (result[(map[co] - '0') + y][(map[co + 4] - '0') + x] == '.')
		{
			co++;
			continue ;
		}
		else
			co = 10;
	}
	if (co == 4)
		return (1);
	else
		return (0);
}
