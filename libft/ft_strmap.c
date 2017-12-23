/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:45:36 by docioban          #+#    #+#             */
/*   Updated: 2017/12/18 20:29:45 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*d;
	size_t	j;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	d = (char *)malloc(i + 1);
	if (d == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		d[j] = f(s[j]);
		j++;
	}
	d[j] = '\0';
	return (d);
}
