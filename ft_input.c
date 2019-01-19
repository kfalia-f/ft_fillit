/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:33:36 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/19 14:23:55 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_map(int i)
{
	char	**map;

	map = (char **)malloc(sizeof(char *) * 129);
	while (i <= 129)
	{
		map[i] = (char *)malloc(sizeof(char) * 5);
		i++;
	}
	return (map);
}

int		ft_input(int fd)
{
	int		i;
	int		j;
	int		ret;
	char	buff[2];
	char	**map;

	i = 0;
	j = 0;
	map = ft_map(i);
	while ((ret = read(fd, buff, 1)) > 0)
	{
		buff[ret] = '\0';
		map[i][j] = buff[0];
		if (i == 129)
			ft_error(3);
		if (map[i][j] == '\n' && (j == 4 || j == 0))
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	i = 0;
	ft_valid(map);
	return (0);
}
