/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:24:01 by abravo            #+#    #+#             */
/*   Updated: 2022/02/24 14:33:13 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j])
	{
		write (1, &argv[1][j], 1);
		j++;
	}
	write (1, "\n", 1);
	return (0);
}
