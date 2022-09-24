/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:06:52 by abravo            #+#    #+#             */
/*   Updated: 2022/02/09 17:53:07 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main ()
{
	int a, b, div, mod;
	a = 11;
	b = 2;
	ft_div_mod (a, b, &div, &mod);
	if (div == 5 && mod == 1)
	{
		write (1, "Y\n", 2);
	}	
	else 
	{
	write (1, "N\n", 2);
	}
}*/
