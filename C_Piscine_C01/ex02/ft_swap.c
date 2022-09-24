/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:32:32 by abravo            #+#    #+#             */
/*   Updated: 2022/02/09 16:59:27 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*int main ()
{
	int a, b;
	a = 2;
	b = 3;
	ft_swap(&a, &b);
	if ((a == 3) && (b == 2))
	{
		write (1, "Y\n", 2);
	}
	else
	{
		write (1, "N\n", 2);
	}
}*/
