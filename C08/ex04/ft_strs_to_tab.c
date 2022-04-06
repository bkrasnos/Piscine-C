/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:16:46 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/03/24 10:02:49 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * (sizeof(char) + 1));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					num_s;
	struct s_stock_str	*test;

	num_s = 0;
	test = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (test == NULL)
		return (0);
	while (num_s < ac)
	{
		test[num_s].size = ft_strlen(av[num_s]);
		test[num_s].str = av[num_s];
		test[num_s].copy = ft_strdup(av[num_s]);
		num_s++;
	}
	test[num_s] = (struct s_stock_str){0, 0, 0};
	return (test);
}
