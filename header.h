/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:44:24 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/19 15:07:06 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/includes/libft.h"
# include <fcntl.h>

int		ft_input(int fd);
void	ft_error(int er);
int		ft_alg(char **map, int n);
int		ft_checkspot(char *map, char **result, int x, int y);
void	ft_clearspot(char **map, char **result, int fn, int x, int y);
int		ft_recurs(char *map, char **result, int x, int y, int mapsize);
void	ft_touch(char *map, char ***result, int x, int y);
int		ft_valid(char **map);
char	**ft_newmap(char **map);
void	ft_output(char ***result);

#endif
