/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cracano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:25:50 by cracano           #+#    #+#             */
/*   Updated: 2022/02/06 16:47:53 by cracano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a);

void	rush_head(int x)
{
	int	i;

	i = 1;
	ft_putchar(47);
	i++;
	while (i < x)
	{
		ft_putchar(42);
		i++;
	}
	if ((i == x) && (x != 1))
	{
		ft_putchar(92);
	}
	ft_putchar(10);
}

void	rush_body(int x, int y)
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (j < y)
	{
		ft_putchar(42);
		i++;
		j++;
		while ((i < x) && (i > 0))
		{
			ft_putchar(32);
			i++;
		}
		if ((i == x) && (x != 1))
		{
			ft_putchar(42);
			i = 1;
		}		
		ft_putchar(10);
	}
}

void	rush_feet(int x, int y)
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	i++;
	if (j <= y)
	{
		ft_putchar(92);
		while ((i < x) && (i > 0))
		{
			ft_putchar(42);
			i++;
		}
		if ((i == x) && (x != 1))
		{
			ft_putchar(47);
		}
		ft_putchar(10);
	}
}

void	rush(int x, int y)
{
	if ((x >= 1) && (y >= 1))
	{
		rush_head(x);
		rush_body(x, y);
		rush_feet(x, y);
	}
}
