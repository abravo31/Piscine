/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:19:27 by abravo            #+#    #+#             */
/*   Updated: 2022/02/16 18:50:11 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_hex(char c)
{
	unsigned char	d;
	char			*hex;

	d = c;
	hex = "0123456789abcdef";
	ft_putchar(hex[d / 16]);
	ft_putchar(hex[d % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] == 127))
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*#include <stdio.h>
#include <unistd.h>
int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr_non_printable(d);
}
int main (int argc, char **argv)
{
	argc++;
	ft_putstr_non_printable(argv[1]);
	return 0;
}*/
