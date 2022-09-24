/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:26:18 by abravo            #+#    #+#             */
/*   Updated: 2022/02/09 18:47:26 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	i;
	int	j;

	i = (*a) / (*b);
	j = (*a) % (*b);
	*a = i;
	*b = j;
}
/*int main ()
{
	int a, b;
	a = 14;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf ("%d %d", a, b);
}*/
