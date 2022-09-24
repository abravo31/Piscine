/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:38:01 by abravo            #+#    #+#             */
/*   Updated: 2022/02/24 12:42:09 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
			
int main (int argc, char **argv)
{
	int	j;
	j = 0;
	
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][j])
	{
		if (argv[1][j] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
