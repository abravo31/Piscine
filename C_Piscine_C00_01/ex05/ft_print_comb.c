/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:12:57 by abravo            #+#    #+#             */
/*   Updated: 2022/02/07 16:05:34 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_printchar(char c, char d, char u);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{	
			u = d + 1;
			while (u <= '9')
			{
				ft_printchar (c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	ft_printchar(char c, char d, char u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (!((c == '7') && (d == '8') && (u == '9')))
	{
		write (1, ", ", 2);
	}
}
