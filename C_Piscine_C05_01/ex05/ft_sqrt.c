/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:46:00 by abravo            #+#    #+#             */
/*   Updated: 2022/02/22 20:18:11 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2 && nb > 2)
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main (void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
	printf("%d\n", ft_sqrt(2147483647));
}
int main ()
{
	printf("%d", ft_sqrt(9));
	return 0;
}*/
