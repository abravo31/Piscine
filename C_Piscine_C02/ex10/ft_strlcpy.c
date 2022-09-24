/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:58:07 by abravo            #+#    #+#             */
/*   Updated: 2022/02/19 13:31:58 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
		dest[i] = src[i];
		i++;
		}	
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*int main (int argc, char **argv)
{
	argc ++;
	unsigned int size;

	printf ("%d", ft_strlcpy(argv[1], argv[2], 3));
			return 0;
}*/
