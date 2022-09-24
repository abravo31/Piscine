/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:55:04 by abravo            #+#    #+#             */
/*   Updated: 2022/02/24 11:20:35 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen_strs(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		n;
	int		i;
	char	*tab;

	n = 0;
	i = 0;
	if (size == 0 || strs == NULL || sep == NULL)
		return (0);
	while (strs[i])
		n = n + ft_strlen_strs(strs[i++]);
	tab = malloc(sizeof(char) * (n + 1 + (ft_strlen_strs(sep)) * (size -1)));
	i = 0;
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	tab[ft_strlen_strs(tab)] = '\0';
	return (tab);
}

/*int main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "-toto42-"));
}*/
