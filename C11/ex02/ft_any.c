/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:04:52 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/03/28 10:15:50 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*int	ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
int main (void)
{
	char **array;
	int	i;

	i = 0;
	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	while ( i < 3)
	{
		printf("%d\n", ft_any(&array[i], ft));
		i++;
	}
}*/
