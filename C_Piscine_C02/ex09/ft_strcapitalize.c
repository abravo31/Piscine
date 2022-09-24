/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:47:50 by abravo            #+#    #+#             */
/*   Updated: 2022/02/16 19:23:28 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[j] != '\0')
	{
		if (!((str[j] >= 48 && str[j] <= 57)
				|| (str[j] >= 65 && str[j] <= 90)
				|| (str[j] >= 97 && str[j] <= 122))
			&& str[j + 1] >= 'a' && str [j + 1] <= 'z')
			str[j + 1] = str[j + 1] - 32;
		j++;
	}
	return (str);
}
/*int main (int argc, char **argv)
{
	argc++;
	printf("%s", ft_strcapitalize(argv[1]));
	return 0;

}*/
