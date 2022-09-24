/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:11:37 by abravo            #+#    #+#             */
/*   Updated: 2022/02/10 19:29:46 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	k;

	k = 0;
	j = 0;
	while (j < size)
	{
		k = tab[j];
		tab[j] = tab[size - 1];
		tab[size -1] = k;
		size--;
		j++;
	}
}
/*int main ()
{
	int tab[6] = {0,1,2,3,4,7};
	ft_rev_int_tab(tab, 6);
	printf("%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return 0;
}*\
