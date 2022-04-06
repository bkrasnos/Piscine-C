/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:40:26 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/03/19 11:43:42 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (!s1[i])
		return ('\0' - s2[i]);
	else if (!s2[i])
		return (s1[i] - '\0');
	return (0);
}

/*int	main(void)
{
	char	str1[] = {"123456789"};
	char	str2[] = {"123456789"};

	if (ft_strcmp(str1, str2) == 0)
		write(1, "same", 4);
	else
		write(1, "different", 9);
	write(1, "\n", 1);
	return (0);
}*/
