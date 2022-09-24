/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:17:21 by abravo            #+#    #+#             */
/*   Updated: 2022/02/24 18:36:22 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ()
{
	int	i;
	char	n;

	i = 1;
	while (i <= 99)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			if (i > 9)
			{
				n = i / 10 + '0';
				ft_putchar(n);
				n = i % 10 + '0';
				ft_putchar(n);
			        ft_putchar('\n');	
			}
			else
			{	
				ft_putchar(i + '0');
				ft_putchar('\n');
			}
		}
		i++;
	}
	write(1, "100\n", 4);
}

