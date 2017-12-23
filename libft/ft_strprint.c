/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:56:09 by docioban          #+#    #+#             */
/*   Updated: 2017/12/12 19:17:14 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strprint(char const *s, char c, size_t index)
{
	size_t	i;
	char	*d;
	size_t	j;

	i = index;
	while (s[i] != '\0' && s[i] != c)
		i++;
	d = (char *)malloc(sizeof(char *) * (i + 1));
	j = 0;
	while (i - index != 0)
	{
		d[j] = s[index];
		index++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
