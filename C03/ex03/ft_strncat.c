/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:58:13 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/03/20 10:43:33 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}*/

char	*ft_strncat(char *dest, char *src, unsigned	int nb)
{
	unsigned int	i;
	unsigned int	lenght;

	i = 0;
	lenght = 0;
	while (dest[lenght])
		lenght++;
	while (i < nb && src[i])
	{
		dest[lenght] = src[i];
		lenght++;
		i++;
	}
	dest[lenght] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	r[] = {"world\n"};
	char	t[20] = {"Hello "};

	ft_strncat(t, r, 5);
	ft_putstr(t);
	return (0);
}*/
