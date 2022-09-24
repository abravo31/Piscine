/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:53:45 by abravo            #+#    #+#             */
/*   Updated: 2022/02/21 17:24:40 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > i)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
/*
int main ()
{
	printf("%d", ft_iterative_power(-3, 7));
	return 0;
}*/
