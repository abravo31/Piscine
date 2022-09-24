/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:05:39 by abravo            #+#    #+#             */
/*   Updated: 2022/02/23 19:23:46 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (size));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return tab;
}
/*
int main ()
{
	int	i;
	
	i = 0;
	while (i < 16)
	{
		printf("%d", ft_range(-7, 9)[i]);
		i++;
	}
	return 0;
}*/
