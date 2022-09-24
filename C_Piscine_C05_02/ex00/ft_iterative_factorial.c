/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:49:17 by abravo            #+#    #+#             */
/*   Updated: 2022/02/20 13:18:10 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(10));
	printf("6:%d\n", ft_iterative_factorial(3));
}*/
