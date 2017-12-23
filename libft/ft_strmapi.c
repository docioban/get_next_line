/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: docioban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 08:58:26 by docioban          #+#    #+#             */
/*   Updated: 2017/12/02 17:55:09 by docioban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	index;
	char	*d;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	index = 0;
	d = (char *)malloc(i + 1);
	if (d == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		d[index] = f(index, s[index]);
		index++;
	}
	d[index] = '\0';
	return (d);
}
