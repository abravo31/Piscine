/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:47:14 by abravo            #+#    #+#             */
/*   Updated: 2022/02/11 14:23:40 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 2;
	while (i >= argc - j && i > 0)
	{
		ft_putstr(argv[i]);
		i--;
		j++;
		ft_putchar('\n');
	}
	return(0);
}
