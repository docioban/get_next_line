/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:19:50 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 16:40:35 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_itoa(int nbr)
{
	int i;

	i = 0;
	while (nbr)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

static char	*print_itoa(char *s, int index, int nbr)
{
	while (nbr)
	{
		s[index] = nbr % 10 + '0';
		nbr /= 10;
		index--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*s;

	negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n <= 0)
	{
		negative = 1;
		n *= -1;
	}
	i = test_itoa(n);
	if (!(s = (char *)malloc(i + negative + 1)))
		return (NULL);
	if (negative)
		s[0] = '-';
	i += negative;
	s[i--] = '\0';
	if (n == 0)
		s[0] = '0';
	s = print_itoa(s, i, n);
	return (s);
}
